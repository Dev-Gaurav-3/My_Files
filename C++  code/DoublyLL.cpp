#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};

class doublyLL{
public:
    Node* head;
    Node* tail;

    doublyLL(){
        head = NULL;
        tail = NULL;
    }

    void insert(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            tail = new_node;
            return; 
        }
        new_node->next = head;
        head->prev = tail;
        head = new_node;
        return;
    }

    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void insertatend(int val){
        Node* new_node = new Node(val);
        if(tail == NULL){
            head = new_node;
            tail = new_node;
            return; 
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
 
    }
    void insertatk(int val, int k){
        Node* new_node = new Node(val);
        if(k == 0){
            return;
        }
        int count = 1;
        Node* temp = head;
        while(count<(k-1)){
            temp = temp->next;
            count++;
        }
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->next->prev = new_node;
        return;
    }
    void DelAtStrt(){
        if(head == NULL){
            return ;
        }

        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        return ;
    }
    void DelAtK(int k){
        Node* temp = head;
        int count = 1;
        while (count<k){
            temp = temp->next;
            count++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        return;
    }
    void delatend(){
        if(head == NULL){
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
        }
        else{
            tail->next = NULL;
        }
        free(temp);
        return;
    }

    void reverse(){
        Node* temp = head;
        while (temp != NULL){
            head = head->next;
        }
    }

    bool is_palin(){
        Node* temp1 = head;
        Node* temp2 = tail;

        while(temp1 != temp2 && temp2 != temp1->prev){
            if(temp1->val == temp2->val){
                temp1 = temp1->next;
                temp2 = temp2->prev;
            }
            else{
                return false;
            }
        }
        return true;
    }
    //  delete the node whose neighbours have the same value

    void rem_nod(Node* &head , Node* &tail){
        Node* temp = tail->prev;
        while(temp != head){
            Node* previ = temp->prev;
            Node* nexti = temp->next;
            if(previ->val == nexti->val){
                previ->next = nexti;
                nexti->prev = previ;
                free(temp);          
            }
            else{
                temp = previ;
            }
        }
        return ;
    }
};


int main(){

    doublyLL dl1;
    dl1.insert(1);
    dl1.insert(3);
    dl1.insert(2);
    dl1.insert(3);
    dl1.insert(3);
    dl1.display();

    // dl1.insertatend(0);
    // dl1.display();

    // dl1.insertatk(5,2);
    // dl1.display();

    // dl1.DelAtStrt();
    // dl1.display();

    // dl1.DelAtK(2);
    // dl1.display();

    // reverse a Doubly linked list //
    // dl1.reverse();
    // dl1.display();    
    
    // dl1.delatend();
    // dl1.display();

    // cout<<dl1.is_palin();

    dl1.rem_nod(dl1.head,dl1.tail);
    dl1.display();
    return 0;
}
