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

// DELETE ALL DUPLICATE ELEMENTS //

void Del_Dupli(Node *&head){
    
    Node* curr = head;

    while(curr){
        while(curr->next != NULL && curr->val == curr->next->val){
           Node *temp = curr->next;
           curr->next = curr->next->next;
           free(temp);
        }
        curr = curr->next;       
    }

}

// Print LINKED LIST in Reverse Order //

void Reverse(Node *head){

    if(head == NULL){
        return;
    }

    Reverse(head->next);
    cout<<head->val<<" ";

}

// REVERSING A LL //

Node* reversell(Node* &head){
    Node* prev = NULL;
    Node* curr = head;


    while(curr != NULL){
        Node* nextptr = curr->next;
        curr->next = prev;
        // move all 3 ptrs +1;
        prev = curr;
        curr = nextptr;
    }

    Node* newhead = prev;
    return newhead;
}


int main(){

    Linked_list l1;

    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    // l1.insert(3);
    // l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    // l1.insert(5);
    // l1.insert(5);
    l1.display();
    // Del_Dupli(l1.head);
    // l1.display();
    // Reverse(l1.head);
    l1.head = reversell(l1.head);
    l1.display();



    return 0;
}