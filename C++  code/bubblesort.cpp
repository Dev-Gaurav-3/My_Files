#include<iostream>
using namespace std;

// BUBBLE SORT => repeatedly swap two adjacent elements if in wrong order

// int main(){
//     int arr[]= {20,50,40,10,30};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0; i <n-1; i++)
//     {
//         for (int j = 0; j <n-i-1; j++)
//         {
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
    
    

//     return 0;
// }

// HOW TO OPTIMIZE THE BUBBLE SORT IN CASE OF NEARLY SORTED ARRAY

int main(){
    int arr[]= {1,0,1,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans =0;

    for (int i = 0; i <n-1; i++)
    {   bool flag = false;
        for (int j = 0; j <n-i-1; j++)
        {
            if(arr[j] > arr[j+1]){
                flag = true;
                swap(arr[j],arr[j+1]);
                ans++;
                
            }
        }
        if(!flag) break;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<ans;
    
    
    

    return 0;
}

