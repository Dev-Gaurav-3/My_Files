#include<iostream>
using namespace std;

class stack{
    int capacity;
    int *arr;
    int top;
public:
    stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;

    }

    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"Overflow";
            return ;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop(){
        if(this->top == -1){
            cout<<"Underflow";
            return INT8_MIN;
        }
        this->top--;

    }

    int gettop(){
        if(this->top == -1){
            cout<<"Underflow";
            return INT8_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top == -1;
    }

    int size(){
        return this->top+1;
    }

    bool isFull(){
        return this->top == this->capacity-1;
    }
};

int main(){

    stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout<<s1.gettop()<<"\n";
    s1.push(4);
    s1.push(5);
    cout<<s1.gettop()<<"\n";
    s1.push(6);
    
    return 0;
}
