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
    head->next = new ListNode(1);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(6);
    head->next->next->next->next = new ListNode(5);

    deque<int>dq;
    ListNode* temp = head;
    int cnt = 1;
    ListNode* dummy = new ListNode();
    ListNode* curr = dummy;
    while(temp){
        int k = cnt;
        while(temp && k--){
            dq.push_back(temp->val);
            temp = temp->next;
        }
        cnt++;
        if(dq.size()%2 == 0){
            while(!dq.empty()){
                curr->next = new ListNode(dq.back());
                dq.pop_back();
                curr = curr->next;
            }
        }
        else{
            while(!dq.empty()){
                curr->next = new ListNode(dq.front());
                dq.pop_front();
                curr = curr->next;
            }
        }
    }


  return 0;
}
