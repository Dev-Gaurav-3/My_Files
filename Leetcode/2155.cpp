#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
        vector<int> maxScoreIndices(vector<int>& nums) {
            int total_ones = 0, zeroes = 0;
            for (int num : nums) {
                if (num == 1) total_ones++;
            }
            
            int max_score = total_ones;
            vector<int> result = {0};
            
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0) zeroes++;
                else total_ones--;
                
                int score = zeroes + total_ones;
                if (score > max_score) {
                    max_score = score;
                    result.clear();
                    result.push_back(i + 1);
                } else if (score == max_score) {
                    result.push_back(i + 1);
                }
            }
            
            return result;
        }
    };