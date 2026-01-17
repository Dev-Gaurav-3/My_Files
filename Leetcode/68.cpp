#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>words = {"This", "is", "an", "example", "of", "text", "justification."};
    int mW = 16;
    vector<string>ans;

    for (int i = 0; i < words.size(); i++)
    {
        int curr = 0;
        int j = i;
        int k = 0;
        while(j<words.size() && curr + words[j].size() < mW){
            curr += words[j].size();
            curr++; // for gaps
            j++;
            k++;
        }
        int gaps = mW - curr+k;
        string toPush = "";
        int till = i+k;
        for (int x = i; x < till; x++)
        {
            k--;
            toPush += words[x];
            if(k != 0){
                int gap = ceil(gaps/k);
                toPush.append(gap,' ');
                gaps -= gap; 
            }
        }
        ans.push_back(toPush);
        i = j - 1;
    }
    for(auto &x:ans){
        cout<< x <<endl;
    }
  return 0;
}
