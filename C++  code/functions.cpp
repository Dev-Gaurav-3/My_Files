#include<iostream>
#include<cmath>
using namespace std;

// STANDARD LIBRARY FUNCTIONS

// include cmath
// pow(a,b)
// sqrt(a)

// int p = 7;

// HOW TO ACCESS GLOBAL VARIABLE OVER LOCAL VARIABLE

// int main(){

//     int p = 5;

//     cout<<p<<endl;
//     cout<<::p;     # :: => this is known as scope resolution operator
        
//     return 0 ;
// }

// PASS BY REFERENCE

// int main(){

//     int p = 5;
//     int &q = p;

//     q++;

//     cout<<p<<endl;
//     cout<<&p<<endl;
//     cout<<&q<<endl;
                     
                     
//     return 0 ;
// }

void changevalue(int x, int &y){
    x = 100;
    y = 99;
}


int main(){

    int a = 5, b = 6;

    changevalue(a,b);
    cout<<a<<" "<<b;

                     
                     
    return 0 ;
}