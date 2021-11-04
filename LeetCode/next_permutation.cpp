// C++
// Problem Statement: https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakingPoint = 0;
        for(int i = nums.size() - 1; i > 0; i--) {
            if(nums[i] > nums[i-1]) {
                int nge = nums[i];
                int ngeIndex = i;
                for(int j = i + 1; j < nums.size(); j++) {
                    if(nums[j] > nums[i-1] && nums[j] <= nge) {
                        nge = nums[j];
                        ngeIndex = j;
                    }
                }
                swap(nums[ngeIndex], nums[i-1]);
                breakingPoint = i;
                break;
            }
        }
        reverse(nums.begin() + breakingPoint, nums.end());
    }
};
