#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }

};
class LL{
public:
        void insert(Node* &head,int val){
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void display(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
    }
    int getlen(Node* head){
        Node* temp = head;
        int ans = 0;
        while(temp != NULL){
            ans++;
            temp = temp->next;
        }
        return ans;
    }
    void remove_dupli(Node* head){
        Node* prev = head;
        Node* temp = head->next->next;
        int curr = getlen(head);
        while (curr>0){
            if(prev->next == temp){
                free(temp);
                temp = temp->next;
                prev = prev->next;
                curr--;
            }
            else{
                temp = temp->next;
                prev = prev->next;
                curr--;
            }
        }
                
    }

};
int main(){
    
    LL l1;
    Node* head = NULL;
    l1.insert(head,5);
    l1.insert(head,4);
    l1.insert(head,2);
    l1.insert(head,2);
    l1.insert(head,1);
    l1.display(head);
    l1.remove_dupli(head);
    l1.display(head);
    return 0;
}
