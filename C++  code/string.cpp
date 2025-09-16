#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

// string countsort(string str){
//     vector<int>freq(26,0);

//     // storing freq of every character

//     for (int i = 0; i <str.length(); i++)
//     {
//         int index = str[i] - 'a';
//         freq[index]++;
//     }
//     int j = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         while (freq[i]--)
//         {
//             str[j++] = i + 'a';
//         }
        
//     }

//     return str;
// }

// int main(){
    // string str = "abcdefgh";
    
    // string str2("hello");

    // both are the way to represent a string

    // string str3;
    // getline(cin,str3);

    // cout<<str3;

    //REVERSE()

    // string str = "abcd";
    // reverse(str.begin(),str.end());

    // cout<<str;

    //SUBSTR(position,length)

    // cout<<str.substr(0,3);

    // THE + OPERATOR

    // string str2 = "efgh";

    // cout<<str+str2; // 1st mthd

    // str += str2; // 2nd mthd

    // str = str + str2; // 3rd mthd but it will create a copy in systummm;

    // TO CONCATINATE 

    // char arr1[20] = "college";
    // char arr2[20] = "wallah";

    // strcat(arr1,arr2);
    // cout<<arr1;
    
    // str.pushback("")
    // str.length() or str.size()

    // to_string() => used to convert numeric values to string

    // add 1 to last in number

    // int n = 45;
    // string st = to_string(n);

    // st += "1";
    
    // cout<<st;

    // SORT THE STRING

//     string str;
//     cin>>str;

//     cout<<countsort(str); // time = O(length of str) space = O(26) which is constant



//     return 0;
// }

// bool isanagram(string s1,string s2){
//     vector<int>freq(26,0);

//     if(s1.length() != s2.length()) return false; 

//     for (int  i = 0; i < s1.length(); i++)
//     {
//         freq[s1[i] -'a']++;
//         freq[s2[i]-'a']--;

//     }
    
//     for (int i = 0; i < s1.length(); i++)
//     {
//         if(freq[i] != 0) return false;
//     }
//     return true;
    
// }



// int main(){

//     // given two strings t ans s , return true if t is an anagram(rearranging the letters to get a new word) of s
//     string s1,s2;
//     cin>>s1>>s2;

//     if(isanagram(s1,s2)){
//         cout<<"anagram";
//     }
//     else{
//         cout<<"not anagram";
//     }
    
//     return 0;
// }


// determine the two string if they are isomphic

// bool isIso(string s1,string s2){

//     vector<int>v1(128,-1);
//     vector<int>v2(128,-1);

//     if(s1.size() != s2.size()){
//         return false;
//     }
//     for (int i = 0; i < s1.size(); i++)
//     {
//         if(v1[s1[i]] != v2[s2[i]]){
//             return false;
//         }
//         else{
//             v1[s1[i]] = v2[s2[i]] =i;
//         }
//     }

//     return true;
    

// }

// int main(){

//     string s1 = "egg";
//     string s2 = "ada";
    
//     if(isIso(s1,s2)) cout<<true;

//     else{
//         cout<<false;
//     }


//     return 0;
// }



// string comPrefix(vector<string> &v){

//     sort(v.begin(),v.end());
//     string s1 = v[0];
//     int i = 0;
//     string s2 = v[v.size()-1];
//     int j = 0;

//     string ans ="";

//     while(i<s1.size() && j<s2.size()){
//         if(s1[i] == s2[j]){
//             ans += s1[i];
//             i++,j++;
//         }
//         else{
//             break;
//         }
//     }
//     return ans;
// }

// int main(){

//     int n;
//     cout<<"Enter no. of string: ";
//     cin>>n;

//     vector<string>v(n);

//     for (int i = 0; i <n; i++)
//     {
//         cin>>v[i];
//     }
    
//     cout<<comPrefix(v);

//     return 0;
// }


// Return max. no. of 1's in binary string //

int main(){

    string str;
    cout<<"Enter String: ";
    cin>>str;

    int k;
    cout<<"Enter k: ";
    cin>>k;    

    int zeroes = 0;
    int ones = 0;
    int ans=0;

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == '1'){
            ones++;
        }
        else{
            zeroes++;
        }
    }

    ans = ones;

    if(k<=zeroes){
        ans += k;
    }
    
    cout<<ans;

    return 0;
}