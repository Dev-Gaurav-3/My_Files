#include<iostream>
#include<vector>
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

class LL1{
public:

    Node* head;

    LL1(){
        head = NULL;
    }

    void insert(Node* &head,int val){
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void display(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp =temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

bool IsEqual(Node* head1,Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->val != ptr2->val){
            return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return (ptr1 == NULL && ptr2 == NULL);
    
}

int intersecnode(Node* head1,Node* head2){

    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->val == ptr2->val){
            return ptr1->val;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return 0;

}

int getlen(Node* &head){
    Node*temp = head;
    int n = 0;
    while (temp != NULL){    
        n++;
        temp = temp->next;
    }
    return n;
}

void removehead(Node* &head){
    Node* temp = head;
    head = head->next;

    free(temp);
}

void removenode(Node* &head,int &k){

    Node* prev = head;
    if(k == 0){
        removehead(head);
        return;
    }
    else{
        int curr_pos = 0;

            while (curr_pos != k-1)
            {
                prev = prev->next;
                curr_pos++;
            }

            Node* temp = prev->next;
            prev->next = prev->next->next;

            free(temp);
    }
}

Node* MergeSortLL(Node* &head1, Node* &head2) {
    Node* dummyhead = new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummyhead;

    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->val < ptr2->val) {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        } else {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    if (ptr1 != NULL) {
        ptr3->next = ptr1;
    } else {
        ptr3->next = ptr2;
    }

    Node* mergedHead = dummyhead->next;
    delete dummyhead;

    return mergedHead;
}


Node* mergekll(vector<Node*>&list){
    if(list.size() == 0){
        return NULL;
    }
    while(list.size() >1){
        Node* mergedhead =  MergeSortLL(list[0],list[1]);
        list.push_back(mergedhead);
        list.erase(list.begin());
        list.erase(list.begin());
    }
    return list[0];

}

Node* rotatebyk(Node* head,int k){
    Node* tail = head;
    // int n = getlen(head);
    int n = 0;
    while(tail != NULL){
        tail = tail->next;
        n++;
    }
    n = n+1;
    k = k%n;
    if(k == 0 || head == NULL){
        return head;
    }
    tail->next = head;

    Node* temp = head;
    for (int i = 1; i < n-k; i++)
    {
        temp = temp->next;
    }
    Node* newhead = temp->next;
    temp->next = NULL;
    return newhead;
    
}


int main(){

    LL1 l1;
    LL1 l2;
    LL1 l3;
    LL1 l4;
    LL1 l5;
    l1.insert(l1.head,5);
    l1.insert(l1.head,4);    
    l1.insert(l1.head,3);    
    l1.insert(l1.head,2);    
    l1.insert(l1.head,1);    

    cout<<"L1: ";
    l1.display();

    l1.head = rotatebyk(l1.head,2);
    l1.display();


    // l2.insert(l2.head,10);
    // l2.insert(l2.head,9);
    // // l2.insert(l2.head,8);
    // l2.insert(l2.head,7);
    // // l2.insert(l2.head,6);


    // cout<<"L2: ";
    // l2.display();
    // cout<<endl;
    // cout<<IsEqual(l1.head,l2.head);
    // cout<<"\n";
    // cout<<intersecnode(l1.head,l2.head);

    // cout<<getlength(l1.head);
    // int n1 = getlength(l1.head);
    // int k = 5;
    // int n2 = n1-k;
    // removenode(l1.head,n2);
    // l1.display(l1.head);

    // l3.head=MergeSortLL(l1.head,l2.head);

    // cout<<"L3: ";
    // l3.display();

    // l5.insert(l5.head,15);
    // l5.insert(l5.head,14);
    // l5.insert(l5.head,12);
    
    // vector<Node* > list;
    // list.push_back(l1.head);
    // list.push_back(l2.head);
    // list.push_back(l5.head);

    // l4.head = mergekll(list);
    // cout<<"l4:";
    // l4.display();

    

    return 0;
}
