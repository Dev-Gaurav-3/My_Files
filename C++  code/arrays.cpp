#include <iostream>
using namespace std;

// datatype arrayname [size]

int main(){

    // int arr[] = {1,2,3,4};

    // cout<<sizeof(arr)<<endl; // gives size
    // cout<<sizeof(arr)/sizeof(arr[1]); // gives no. of elements

    // for (int i = 0; i < sizeof(arr)/sizeof(arr[1]); i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    // for each loop

    // for(int ele:arr){
    //     cout<<ele<<endl;
    // }

   // char vowels[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>vowels[i];
    // }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<vowels[i]<<" ";
    // }


    // CALCULATE THE SUM OF ALL ELEMENTS OF AN GIVEN ARRAY

    // int array[5];

    // int sum = 0;

    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>array[i];
    //     sum += array[i]; 


    // }

    // cout<<sum;

    // FIND THE MAXIMUM VALUE FROM AN ARRAY

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    int Max_Value = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>Max_Value)
        {
            Max_Value  = arr[i];
        }

    }
    
    cout<<Max_Value;
                       
    return 0 ;
}