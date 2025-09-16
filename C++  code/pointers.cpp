#include<iostream>
using namespace std;

// syntax => datatype *name
// pointers can store addresses

// int main(){
//     // Address of operator => &
//     int x = 6;
//     // cout<<&x;
//     int *ptr = &x;
//     cout<<ptr<<"\n";

//     return 0;
// }

// ACCESSING DATA THROUGH AN OPERATOR
// int main(){

//     // Dereferrence operator => *

//     int y =10;
//     int *ptr;
//     ptr = &y;
    

//     cout<<*ptr<<"\n";
//     cout<<ptr<<"\n";
//     cout<<sizeof(y)<<"\n";
//     cout<<ptr +1; // adding +1 is equal to 4bytes for int for float it will be +8
                     
                     
//     return 0 ;
// }

// int main(){

//     int arr[2] ={5,4};

//     int *ptr = &arr[0];

//     cout<<*ptr++<<endl;

//     cout<<arr[0]<<" "<<arr[1]<<endl;    
              
                     
//     return 0 ;
// }

// int main(){

//     int arr2[2] = {5,4};
//     int *ptr2 = &arr2[0];   
//     cout<<(*ptr2)++<<endl;
//     cout<<arr2[0]<<" "<<arr2[1];

//     return 0;
// }

// int main(){

//     int arr[3] ={1,2,3};
//     int *ptr = &arr[0]; 

//     cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;  //means arr is also a pointer ;
//     cout<<*(arr+1);
                     
                     
//     return 0 ;
// }
// NULL POINTER => if we want to have a pointer variable , ehich is just declared but will get address to later store  , syntax int *ptr = NULL

// Dangling pointer => it points that memeory location which is not valid

// VOID POINTER => it can point any datatype value, void pointers cannot be dereferenced

int main(){

    // int x =10;
    // void *ptr = &x;

    // cout<<*ptr; // it will give error but we can use typecasting
    // int *intptr = (int*)ptr;

    // cout<<*intptr;
                     
                     
    return 0 ;
}

