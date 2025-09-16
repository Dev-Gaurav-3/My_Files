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

class Linked_list{
public:

    Node* head;

    Linked_list(){
        head = NULL;
    }

    void insert(int val){
        Node* new_node = new Node(val);

        if(head == NULL){
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;    
    }

    void display(){
        Node* temp = head;

        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL \n";
    }
};

    void del_A_N(Node *head){

        Node *curr_node = head;

        while(curr_node != NULL && curr_node->next != NULL){

            Node* temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            free(temp);
            curr_node = curr_node->next;
             

        }

    }

int main(){
    Linked_list l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);
    l1.display();

    del_A_N(l1.head);
    l1.display();


    return 0;
}