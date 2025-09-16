// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }

//     void insertAtHead(Node* &head,int val){

//         Node* new_Node = new Node(val);
//         new_Node->next = head;
//         head = new_Node;
//     }
//     void print(Node* head){
//         Node  *temp = head;
//         while (temp != NULL)
//         {
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }

//     void insertAtTail(Node* &head,int val){

//         Node* new_Node = new Node(val);

//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }

//         temp->next = new_Node;
//     }

//     void insertAtPos(Node* &head,int pos,int val){
//         Node* new_Node = new Node(val);
//         if(pos==0){
//             insertAtHead(head,val);
//             return ;
//         }

//         Node* temp = head;
//         int curr_pos = 0;

//         while(curr_pos != pos-1){
//             temp = temp->next;
//             curr_pos++;
//         }

//         new_Node->next = temp->next;
//         temp->next = new_Node;

//     }

//     void UpdateAtPos(Node* &head,int pos,int val){
//         Node* new_Node =new Node(val);

//         int curr_pos = 0;
//         Node* temp = head;
//         while (curr_pos != pos)
//         {
//             temp = temp->next;
//             curr_pos++;
//         }
//         temp->next = new_Node; // or we can use temp->val = val;
//     }

//     void DeleteAtHead(Node* &head){

//         Node* temp = head;
//         head = head->next;

//         free(temp);
//     }

//     void DeleteAtEnd(Node* &head){

//         Node* sec_last = head;
//         while(sec_last->next->next != NULL){
//             sec_last = sec_last->next;
//         }

//         Node* temp = sec_last->next;
//         sec_last->next = NULL;
//     }
//     void deleteatpos(Node* &head,int pos){

//         Node* prev = head;
//         if(pos == 0){
//             DeleteAtHead(head);
//             return;
//         }
//         else{
//             int curr_pos = 0;

//             while (curr_pos != pos-1)
//             {
//                 prev = prev->next;
//                 curr_pos++;
//             }

//             Node* temp = prev->next;
//             prev->next = prev->next->next;

//             free(temp);

//         }

//     }
// };

// int main(){

//     // Node* n = new Node(2);
//     // cout<<n->val<<" "<<n->next;

//     Node* head = NULL;

//     head->insertAtHead(head,3);
//     head->insertAtHead(head,2);
//     head->insertAtHead(head,1);
//     head->insertAtHead(head,0);
//     head->insertAtHead(head,-1);
//     head->insertAtTail(head,4);
//     head->print(head);

//     head->insertAtPos(head,2,9);

//     head->UpdateAtPos(head,3,5);

//     head->print(head);
//     head->DeleteAtHead(head);
//     head->print(head);
//     head->DeleteAtEnd(head);
//     head->print(head);
//     head->deleteatpos(head,2);
//     head->print(head);
//     return 0;