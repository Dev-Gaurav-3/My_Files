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
    head->next->next->next->next = new ListNode(5);

    ListNode* last = head;
    while(last->next){
        last = last->next;
    }

    ListNode* curr = head;
    while(curr != NULL && curr->next != NULL) {

        ListNode* temp = curr->next;

        curr->next = temp->next;
        last->next = temp;
        last = temp;
        temp->next = NULL;

        curr = curr->next;
    }

    ListNode* temp = head;
    while(temp){
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
