#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main(){
    
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next= new ListNode(5);

    int k = 5;

    ListNode* ans = new ListNode();
    ListNode* dummy = ans;
    ListNode* temp = head;
    stack<ListNode*>st;
    while(temp){
        int cnt = k;
        while(temp && cnt--){
            st.push(temp);
            temp = temp->next;
        }
        if(st.size() != k){
            stack<ListNode*>rev;
            while (!st.empty())
            {
                rev.push(st.top());
                st.pop();
            }
            while(!rev.empty()){
                dummy->next = rev.top();
                dummy = dummy->next;
                rev.pop();
            }
        }
        while(!st.empty()){
            dummy->next = st.top();
            dummy = dummy->next;
            st.pop();
        }
        dummy->next = NULL;
    }
    while(ans){
        cout<<ans->val<<"->";
        ans = ans->next;
    }
  return 0;
}
