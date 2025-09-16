#include<iostream>
#include<vector>
using namespace std;

//Q) FIND THE TOTAL PAIRS IN THE ARRAY WHOSE SUM IS EQUAL TO GIVEN VALUE X


// int main(){

//     int arr[] = {3,4,6,7,1};

//     int x;
//     cout<<"Enter x: ";
//     cin>>x;

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0;j < 5; j++)
//         {
//             if (arr[i]+arr[j] == x)
//             {
//                 cout<<"("<<arr[i]<<","<<arr[j]<<")";
//             }
            
//         }
//         cout<<endl;        
//     }
//     return 0;
// }


// Q) FIND THE UNIQUE NO. IN A GIVEN ARRAY

// int main() {
//     int arr[] = {2, 3, 1, 4, 2, 3, 1};
//     int n = sizeof(arr)/sizeof(arr[0]);
 
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 arr[i] = arr[j] = -1;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > 0) {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }

// Q) ROTATE THE GIVEN ARRAY BY K STEPS, WHERE N IS THE SIZE OF ARRAY

// #include <iostream>
// using namespace std;
 
// int main() {
//     int array[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     int k;
//     cout << "Enter K: ";
//     cin >> k;

//     k = k % n;

//     int ansarray[5];
//     int j = 0;

//     for (int i = n - k; i < n; i++) // inserting last k elements in ansarray
//     {
//         ansarray[j++] = array[i];
//     }
//     for (int i = 0; i < n - k; i++) // inserting first n-k elements in ansarray
//     {
//         ansarray[j++] = array[i];
//     }

//     for (int i = 0; i < n; i++) {
//         cout << ansarray[i] << " ";
//     }
//     return 0;
// }

// int main(){

//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for (int i = 0; i <n; i++)
//     {
//         cin>>v[i];
//     }
//     const int N = 1e5 +10; //scientific notation of 10^5

//     vector<int> freq(N,0);
//     for (int i = 0; i < n; i++)
//     {
//         freq[v[i]]++;
//     }
//     int q;
//     cout<<"Enter Queries: ";
//     cin>>q;

//     while (q--)
//     {
//         int querryelement;
//         cin>>querryelement;
//         cout<<querryelement<<" is present "<<freq[querryelement]<<" times";
//     }
//     return 0;
// }       

// SORT AN ARRAY CONSISITING OF ONLY ZEROES AND ONES
// int main(){

//     int array[] = {1,1,1,1,1,0};
//     int zeroes = 0;
//     int ones = 0;

//     for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
//     {
//         if(array[i] == 0){
//             zeroes += 1;
//         }

//         else{
//             ones += 1;
//         }
//     }

//     for (int i = 0; i < zeroes; i++)
//     {
//         cout<<0<<" ";
//     }

//     for (int i = 0; i < ones; i++)
//     {
//         cout<<1<<" ";
//     }

//     return 0;
// }

// # ANOTHER APPROACH

// void SortzeroesandOnes(vector<int> &v){

//     int left_ptr = 0;
//     int right_ptr = v.size() - 1;

//     while(left_ptr<right_ptr){
//         if(v[left_ptr] == 1 && v[right_ptr] == 0)
//         {
//             v[left_ptr++] = 0;
//             v[right_ptr--] = 1;
//         }

//         if (v[left_ptr] == 0)
//         {
//             left_ptr++;
//         }
        
//         if (v[right_ptr] ==1)
//         {
//             right_ptr--;
//         }
        
        
//     }
//     return;

// }

// int main(){

//     vector <int> v;

//     int n;
//     cin>>n;

//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//     SortzeroesandOnes(v);

//     for (int i = 0; i < n; i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
//     return 0;
// }

// Q) MOVE ALL THE EVEN INTEGERS AT THE BEGINNING OF AN ARRAY FOLLOWED BY ODD

// void sortevenodd(vector <int> &v){

//     int leftptr = 0;
//     int rightptr = v.size()-1;

//     while (leftptr<rightptr)
//     {
//         if (v[leftptr] %2 == 1 && v[rightptr] %2 == 0)
//         {
//             swap(v[leftptr],v[rightptr]);
//             leftptr++;
//             rightptr--;
//         }
//         if (v[leftptr]%2 == 0)
//         {
//             leftptr++;
//         }
//         if (v[rightptr]%2 == 1)
//         {
//             rightptr--;
//         }
        
        
        
//     }

//     return ;
// }

// int main(){

//     vector <int> v;

//     int n;
//     cin>>n;

//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin>>ele;

//         v.push_back(ele);
//     }

//     sortevenodd(v);

//     for (int i = 0; i < n; i++)
//     {
//         cout<<v[i]<<" ";
//     }
    


//     return 0;
// }

//Q) given a sorted array , return an array of the squares of each number sorted in non decreasing order

// Valid for only positive integers
// int main(){

//     vector<int> v;

//     int n;
//     cin>>n;

//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin>>ele;

//         v.push_back(ele);
//     }
    
//     for (int i = 0; i <n; i++)
//     {
//         v[i]*= v[i];
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         cout<<v[i]<<" ";
//     }
    

//     return 0;
// }

// for both -ve and +ve 

void sorted(vector <int> &v){

    vector <int>v2;
    int left_ptr = 0;
    int right_ptr = v.size()-1;

    while(left_ptr<=right_ptr){
        if (abs(v[left_ptr])<abs(v[right_ptr]))
        {
            v2.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            v2.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
        
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    
}

int main(){

    vector <int> v;

    
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    sorted(v);

    return 0;
}