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
    
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;

    unordered_map<ListNode*,int>mp;   
    if(!head || !head->next) return NULL;
    mp[head]++;
    ListNode* temp = head->next;
    while(true){
        if(mp.count(temp)) break;
        mp[temp]++;
        temp = temp->next;
    }


  return 0;
}
