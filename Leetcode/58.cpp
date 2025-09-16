class Solution {
public:
    bool isAnagram(string s1, string s2) {

        if(s1.length() != s2.length()) return false;
        
        unordered_map<char,int>m2;

        for(char ele:s1){
            m2[ele]++;
        }
        for(char ele:s2){
            if(m2.find(ele) == m2.end()){
                return false;
            }
            else{
                m2[ele]--;
            }
        }
        for(auto in:m2){
            if(in.second !=0){
                return false;
            }
        }
        return true;        
    }
};