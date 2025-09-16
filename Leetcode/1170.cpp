#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int f(string s){
        vector<int>freq(26,0);
        for(auto ele:s){
            freq[int(ele) - 'a']++;
        }
        for(auto ele:freq){
            if(ele>0){
                return ele;
            }
        }
        return 0;
    }

int main(){

    vector<string>queries = {"bbb","cc"};
    vector<string>words = {"a","aa","aaa","aaaa"};

    vector<int>m_words;
    for(auto ele:words){
        m_words.push_back(f(ele));
    }
    sort(m_words.begin(),m_words.end());
    
    vector<int>m_queries;
    for(auto ele:queries){
        m_queries.push_back(f(ele));
    }

    vector<int>res;
    for(auto ele:m_queries){
        int ans = 0;
        for(auto ele2:m_words){
            if(ele2>ele){
                break;
            }
            else{
                ans++;
            }
        }
        res.push_back(m_words.size()-ans);
    }

    for(auto ele:res){
        cout<<ele<<" ";
    }

    return 0;
}
