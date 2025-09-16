#include<iostream>
using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j <= n-i; j++)
//         {
//             cout<<" ";
//         }
        
//         for (int k = 0; k <2*i-1; k++)
//         {
//             cout<<char('A' + k); 
//         }
//         cout<<endl;
        
//     }
//     for (int i = n-1; i >0; i--)
//     {
//         for (int j = n-i; j >= 0; j--)
//         {
//             cout<<" ";
//         }
//         for (int k = 0; k < 2*i-1; k++)
//         {
//             cout<<char('A' + k);
//         }
//         cout<<endl;
        
        
//     }
    
    
                     
                     
//     return 0 ;
// }


// + pattern only for odd numbers
int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int n = num/2;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <num; j++)
        {
            if (i == n || j == n)
            {
                cout<<"*"<<" ";
            }

            else{
                cout<<"  ";
            }            
        }
        cout<<endl;
        
    }
    


                     
                     
    return 0 ;
}