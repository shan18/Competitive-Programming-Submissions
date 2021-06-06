// C++
// Problem Statement: https://leetcode.com/problems/4sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int numSize = nums.size();
        vector<vector<int>> answer;
        
        if(numSize < 4) {
            return answer;
        }
        
        sort(nums.begin(), nums.end());
    
        // Calculate 4 sum
        for(int m = 0; m < numSize - 3; m++) {
            if(m > 0 && nums[m-1] == nums[m]) continue;
            
            // Calculate 3 sum
            for(int i = m + 1; i < numSize - 2; i++) {
                if(i > m + 1 && nums[i-1] == nums[i]) continue;
                
                // Calculate 2 sum
                int j = i + 1, k = numSize - 1;
                while(j < k) {
                    int sum = nums[m] + nums[i] + nums[j] + nums[k];
                    if(sum < target) j++;
                    else if(sum > target) k--;
                    else {
                        answer.push_back({nums[m], nums[i], nums[j], nums[k]});
                        j++;
                        while(nums[j] == nums[j-1] && j < k) j++;
                    }
                }
            }
        }
        
        return answer;
    }
};
