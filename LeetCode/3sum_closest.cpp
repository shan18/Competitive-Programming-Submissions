// C++
// Problem Statement: https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int difference = INT_MAX, closeSum = 0;
        sort(nums.begin(), nums.end());
        
        for(int k = 0; k < nums.size() - 2; k++) {
            int i = k + 1, j = nums.size() - 1;
            while(i < j) {
                int sum = nums[k] + nums[i] + nums[j];
                
                if(abs(target - sum) < difference) {
                    difference = abs(target - sum);
                    closeSum = sum;
                }
                
                if(sum < target) {
                    i++;
                } else if(sum > target) {
                    j--;
                } else {
                    return target;
                }
            }
        }
        
        return closeSum;
    }
};
