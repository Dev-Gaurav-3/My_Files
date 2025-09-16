#include<iostream>
using namespace std;

int main(){

    string s1 = "ab";
    string s2 = "pqrs";
    string s3;

    int n;
    if(s1.size()>s2.size()){
        n = s2.size();
    }
    else{
        n = s1.size();
    }

    for (int i = 0; i < n; i++)
    {
        s3.push_back(s1[i]);
        s3.push_back(s2[i]);
    }
    
    if(s1.size()>s2.size()){
        for (int i = n; i < s1.size(); i++)
        {
            s3.push_back(s1[i]);
        }
    }
    else{
        for (int i = n; i < s2.size(); i++)
        {
            s3.push_back(s2[i]);
        }
    }
    cout<<s3;

    return 0;
}
