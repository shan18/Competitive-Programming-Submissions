// C++
// Problem Statement: https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> answer;
        int i = 0, j = nums.size() - 1;
        while(i < j) {
            int sum = nums[i] + nums[j];
            if(sum < target) {
                i++;
            } else if(sum > target) {
                j--;
            } else {
                answer.push_back({-target, nums[i], nums[j]});
                i++;
                while(nums[i - 1] == nums[i] && i < j) {
                    i++;
                }
            }
        }
        return answer;
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int numsSize = nums.size();
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> answer;
        for(int i = 0; i < numsSize - 2; i++) {
            if(i > 0 && nums[i - 1] == nums[i]) {
                continue;
            }
            
            vector<int> twoSumArr;
            twoSumArr.assign(nums.begin() + i + 1, nums.end());
            
            vector<vector<int>> twoAnswer = twoSum(twoSumArr, -nums[i]);
            
            for(vector<int> j: twoAnswer) {
                answer.push_back(j);
            }
        }
        
        return answer;
    }
};
