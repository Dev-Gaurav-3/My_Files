#include<iostream>
#include<vector>
using namespace std;

// vectors are dynamic arrays where we can add or delete elements
// how to declare => vector <datatype> vectorname(size);

int main(){

    // vector<int> vec; 

    // cout<<vec.size()<<endl;

    // vec.resize(5);
    // cout<<vec.size()<<endl;
    // vec.insert(position,element)

    // vec.begin() => first element
    // vec.end() => last element
    //vec.pop_back() => delete last element
    //vec.erase(vec.begin()+position or vec.end() - position) 
    //vec.clear() => delete all elements

    // for (int i = 0; i <5; i++)
    // {
    //     int n;
    //     cin>>n;

    //     vec.push_back(n);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
    // cout<<endl;
    
    // cout<<vec.capacity();  // capacity increases in the power of 2

    // Q) FIND THE LAST OCCURENCE OF AN ELEMENT X IN AN GIVEN ARRAY

    // vector <int> v(6);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin>>v[i];
    // }
    
    // int x;
    // cout<<"Enter x: ";
    // cin>>x;

    // int last_occurence = -1;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == x)
    //     {
    //         last_occurence = i;
    //     }
        
    // }

    // cout<<last_occurence;

    // Q) FIND THE NUMBER OF OCCURENCES OF A PARTICULAR ELEMENT X

    // int occurence = 0;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == x)
    //     {
    //         occurence += 1;
    //     }
        
    // }
    
    // cout<<occurence;

    // Q) FIND THE NUMBER OF ELEMENTS STRICTLY GREATER THAN X

    // int result = 0;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i]> x)
    //     {
    //         result += 1;
    //     }
        
    // }
    // cout<<result;

    //Q) CHECK THE GIVEN ARRAY IS SORTED OR NOT

    int array[] = {1,2,3,4,5,6};

    bool sorted = true;

    for (int i = 1; i <6; i++)
    {
        if (array[i]<=array[i-1])
        {
            sorted = false;
        }

    }

    cout<<sorted;

    


                    
    return 0 ;
}