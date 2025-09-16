#include<iostream>
using namespace std;

class Node{
public:

    int val;
    Node* next;

    Node(int data){
        val = data;
    }
};

class cirLL{
public:

    Node* head;
    cirLL(){
        head = NULL;
    }

    void display(){

        Node* temp = head;
        do
        {
            cout<<temp->val<<"->";
            temp=temp->next;
        } while (temp != head);       
        cout<<endl;
    }

    void insertstrt(int val){
        Node* new_node = new Node(val);

        if(head == NULL){
            head = new_node;
            new_node->next =  head;
            return;
        }
        Node* tail = head;  
        while(tail->next != head){
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void insert_at_end(int val){
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        Node* new_node = new Node(val);
        tail->next = new_node;
        new_node->next = head;
        tail = new_node;        
    }
}; 

// Template //

template <typename T>
class node{
public:
    T val;
    node* next;

    node(T data){
        val = data;
        next = NULL;
    }

};

int main(){
    
    cirLL CL1;
    CL1.insertstrt(5);
    CL1.insertstrt(4);
    CL1.insertstrt(3);
    CL1.insertstrt(2);
    CL1.insertstrt(1);
    CL1.insert_at_end(6);

    // CL1.display();

    node <int>*node1 = new node<int>(3);
    cout<<node1->val<<" ";
    node <char>*node2 = new node<char>('A');
    cout<<node2->val<<" ";

    return 0;
}