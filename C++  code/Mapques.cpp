#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


// Q) Given an array of strings. 
//  You can move any number of characters from one string to any
//  other string any number of times. You just have to make all of them equal.
// Print "Yes" if you can make every string in the array equal by using any
//  number of operations otherwise print "No"

// bool CanMakeEqual(vector<string>&v){
//     unordered_map<char,int>m1;

//     for(auto str:v){
//         for(char c:str){
//             m1[c]++;
//         }
//     }
//     int n = v.size();
//     for(auto ele :m1){
//         if(ele.second%n != 0) return false;
//     }
//     return true;
// }

// int main(){

//     vector<string>v = {"wallahah","al","wall"};

//     cout<<(CanMakeEqual(v) ? "Yes": "No");

    


//     return 0;
// }

//Check whether two Strings are anagram of each other. Return true if they are else return false.
// An anagram of a string is another string that contains the same characters, only the order of
// characters can be different. For example, "abcd" and "dabc" are an anagram of each other.

// int main(){

//     unordered_map<char,int>m2;
//     string s1 = "anagram";
//     string s2 = "gram";

//     for(char ele:s1){
//         m2[ele]++;
    // }
    // for(char ele:s2){
    //     if(m2.find(ele)  == m2.end()){
    //         return false;
    // }
    // else{
    //     m2[ele]--;
    // }
    // }

//     for(auto ele : m2){
//         if(ele.second!= 0){
//             cout<<"False";
//             return 0;
//         }
//     }
//     cout<<"True";
//     return 0;
// }

// Q) Check whether two Strings are isomorphic of each other. Return true if they are else
// return false.

// Two strings are isomorphic of each other if there is a one-to-one mapping possible
// for every character of the first string to every character of second string and all
// occurrences of every character in first string maps to the same character in the
// second string.

bool IsIso(string s1,string s2){
    if(s1.length() != s2.length()) return false;

    unordered_map<char,char>m;

    for (int i = 0; i < s1.length(); i++)
    {
        if(m.find(s1[i]) != m.end()){
            if(m[s1[i]] != s2[i]){
                return false;
            }
        }
        else{
            m[s1[i]] = s2[i];
        }
    }

    m.clear();

    for (int i = 0; i < s2.length(); i++)
    {
        if(m.find(s2[i]) != m.end()){
            if(m[s2[i]] != s1[i]){
                return false;
            }
        }
        else{
            m[s2[i]] = s1[i];
        }
    }


}


int main(){

    string s1,s2;
    cin>>s1>>s2;

    cout<<(IsIso(s1,s2) ? "Iso":"NotIso");


    return 0;
}