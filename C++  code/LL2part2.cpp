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
    Node* head;

    LL(){
        head = NULL;
    }

    void insert(int val){
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
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

    void midele(){
        Node* temp = head;
        int ans = getlen(head);  // make ans for even or odd terms .....
        for (int i = 0; i < ans/2; i++)
        {
            temp = temp->next;
        }
        cout<<temp->val;
        
    }

    bool iscycle(){
        Node* slow = head;
        Node* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                cout<<slow->val;
                return true;
            }
        }
        return false;
    }
};



int main(){

    LL l1;

    l1.insert(5);
    l1.insert(4);
    l1.insert(3);
    l1.insert(2);
    l1.insert(1);
    
    l1.display();
    // l1.midele();
    // l1.head->next->next->next->next->next = l1.head->next->next->next;
    // cout<<l1.iscycle();

    


    return 0;
}
