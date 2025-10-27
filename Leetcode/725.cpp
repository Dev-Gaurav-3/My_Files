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

    int k = 5;

    vector<ListNode*>ans;
    ListNode* temp = head;
    int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        }
        if(len<=k){
            temp = head;
            while(temp){
                ListNode* toPush = temp;
                toPush->next = nullptr;
                ans.push_back(toPush);
                temp = temp->next;
            }
            int empty = k-len;
            while (empty--)
            {
                ans.push_back(nullptr);
            }    
    }

  return 0;
}
