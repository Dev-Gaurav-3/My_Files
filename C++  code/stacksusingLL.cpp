#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

class stack{
    Node* head;
    int capacity;
    int currsize;
public:
    stack(int c){
        this->capacity = c;
        this->currsize = 0;
        head = NULL;
    }
    bool isempty(){
        return this->head = NULL;
    }
    bool isfull(){
        return this->currsize == this->capacity;
    }
    void push(int data){
        if(this->currsize == this->capacity){
            cout<<"overflow";
            return;
        }
        Node* new_node = new Node(data);
        new_node->next = this->head;
        head = new_node;
        this->currsize++;
    }
    int pop(){
        if(this->head == NULL){
            cout<<"underflow";
            return INT8_MIN;
        }
        Node* new_head = this->head->next;
        this->head->next = NULL;
        Node* toberem = this->head;
        int result = toberem->data;
        delete toberem;
        this->head = new_head;
        return result;
    }
    int gettop(){
        if(this->head == NULL){
            cout<<"Underflow\n";
            return INT8_MIN;
        }
        return this->head->data;
    }
    int size(){
        return this->currsize; 
    }
};

int main(){

    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.gettop()<<"\n";
    st.push(4);
    st.push(5);
    cout<<st.gettop()<<"\n";
    st.push(8);
    


    return 0;
}
