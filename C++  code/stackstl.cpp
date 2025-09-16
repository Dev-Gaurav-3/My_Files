#include<iostream>
#include<stack>
using namespace std;


// stack <int> copyst(stack <int> &input){
//     stack<int> temp;
//     while(not input.empty()){
//         int curr = input.top();
//         input.pop();
//         temp.push(curr); 
//     }
//     stack <int> result;
//     while(not temp.empty()){
//         int curr = temp.top();
//         temp.pop();
//         result.push(curr);
//     }
//     return result;
// }

// void f(stack<int>&st,stack<int>&result){
//     if(st.empty()){
//         return ;
//     }
//     int curr = st.top();
//     st.pop();
//     f(st,result);
//     result.push(curr);
// }

// int main(){
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // cout<<st.top()<<"\n";
    // st.push(4);
    // st.push(5);
    // st.push(6);
    // cout<<st.top()<<"\n";

    // COPY STACK // 

    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);

    // stack<int>res = copyst(st);
    // stack<int>res;
    // f(st,res);
    // while(not res.empty()){
    //     int curr = res.top();
    //     res.pop();
    //     cout<<curr<<endl;
    // }


//     return 0;
// }

// whenever we transfer data from one stack to another it will always be in reverse order

void insertatbottom(stack<int>&st,int x){
    stack<int>temp;
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

void InsertAtIdx(stack<int>&st,int x,int idx){
    stack<int>temp;
    int n = st.size();
    int count = 0;
    while(count< n-idx){
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    insertatbottom(st,100);  // while doing it recursively only we have to add st.pus(x) in base case //
    InsertAtIdx(st,200,2);

    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }




    return 0;
}