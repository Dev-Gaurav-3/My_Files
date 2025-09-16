#include<iostream>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
    int left_ptr = s.size() - 1;
    string ans = "";
    while (left_ptr >= 0) {
        while (left_ptr >= 0 && s[left_ptr] == ' ') {
            left_ptr--;
        }
        if (left_ptr < 0) break;

        int right_ptr = left_ptr;
        while (right_ptr >= 0 && s[right_ptr] != ' ') {
            right_ptr--;
        }

        // Append the word to the result
        ans.append(s.substr(right_ptr + 1, left_ptr - right_ptr));
        ans.push_back(' ');
        left_ptr = right_ptr - 1;
    }
    if (!ans.empty()) {
        ans.pop_back();
    }

    return ans;
        
    }
};