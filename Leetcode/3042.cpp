#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    vector<string>words= {"abab","ab"};
    int count = 0;
    for (int i = 0; i < words.size(); i++)
    {
        string s = words[i];
        for (int j = i+1; j < words.size(); j++)
        {
            int size = words[j].size()-words[i].size();
            if(words[j].rfind(s,0) == 0){
                if(words[j].rfind(s,size) == size){
                    count++;
                }

            }
        }
    }
    cout<<count;
    

    return 0;
}
