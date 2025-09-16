// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }

// };

// class Queue{
//     Node* head = NULL;
//     Node* tail = NULL;
//     int size = 0;
// public:
//     Queue(){
//         head = NULL;
//         tail = NULL;
//     }

//     void EnQueue(int data){
//         Node* new_node = new Node(data);
//         if(head == NULL){
//             head = tail = new_node;
//         }
//         else{
//             tail->next = new_node;
//             tail = new_node;
//         }
//         size++;
//     }
//     void DeQueue(){
//         if(head == NULL){
//             return;
//         }
//         else{
//             Node* oldhead = head;
//             Node* newhead = head->next;
//             head = newhead;
//             if(head == NULL) tail = NULL;
//             oldhead->next = NULL;
//             delete(oldhead);
//             size--;
//         }
//     }
//     int getsize(){
//         return size;
//     }

//     bool IsEmpty(){
//         return head == NULL;
//     }
//     int front(){
//         if(head == NULL){
//             return -1;
//         }
//         return head->data;
//     }

// };

// int main(){

//     // ENQUEUE -> HELP US TO ADD AN ELEMENT 
//     // DEQUEUE -> ---------- REMOVE AN ELEMENT

//     // FRONT -> GIVES WHICH COMES FIRST 

//     // USING LL //

//     Queue q1;
//     q1.EnQueue(10);
//     q1.EnQueue(20);
//     q1.EnQueue(30);
//     q1.EnQueue(40);
//     q1.DeQueue();
//     q1.EnQueue(50);

//     while (not q1.IsEmpty()){
//         cout<<q1.front()<<" ";
//         q1.DeQueue();
//     }  

//     return 0;
// }


// ARRAY IMPLEMENTATION // 

// #include<iostream>
// #include<vector>
// using namespace std;

// class queue{
//     int front;
//     int back;
//     vector<int>v;
// public:
//     queue(){
//         back = -1;
//         front = -1;
//     }

//     void enqueue(int data){
//         v.push_back(data);
//         back++;
//         if(back == 0) front = 0;   
//     }
//     void dequeue(){
//         if(front == back){
//             front = -1;
//             back = -1;
//             v.clear();
//         }
//         else front++;
//     }

//     int getfront(){
//         if(front == -1) return -1;

//         return v[front];
//     }

//     bool isempty(){
//         return front == -1;
//     }
// };


// int main(){   

//     queue q2;
//     q2.enqueue(10);
//     q2.enqueue(20);
//     q2.enqueue(30);
//     q2.enqueue(40);
//     q2.dequeue();
//     q2.enqueue(50);

//     while(not q2.isempty()){
//         cout<<q2.getfront()<<" ";
//         q2.dequeue();
//     }


//     return 0;
// }

// Queue stl //

#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int>q3;
    q3.push(10);
    q3.push(20);
    q3.push(30);
    q3.push(40);
    q3.push(50);

    while(not q3.empty()){
        cout<<q3.front()<<" ";
        q3.pop();
    }

    return 0;
}

// to reverse a Queue first put all ele in stack then again in queue // 
