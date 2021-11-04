// C++
// Problem Statement: https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int checkPivot(vector<int>& nums, int index) {
        if(index == 0 && nums[index] > nums[index + 1]) return index;
        if(index == nums.size() - 1 && nums[index - 1] > nums[index]) return index - 1;
        else if (index > 0 && nums[index - 1] > nums[index] && nums[index] < nums[index + 1]) return index -1;
        else return -1;
    }
    
    int findPivot(vector<int>& nums, int low, int high) {
        if (low >= high) {
            return max(checkPivot(nums, low), checkPivot(nums, high));
        }
        
        int mid = (low + high) / 2;
        return max(
            checkPivot(nums, mid),
            max(findPivot(nums, low, mid - 1), findPivot(nums, mid + 1, high))
        );
    }
    
    int binarySearch(vector<int>& nums, int low, int high, int target) {
        while(low <= high) {
            int mid = (low + high) / 2;
            if(nums[mid] == target) return mid;
            if(target < nums[mid]) high = mid - 1;
            else if(target > nums[mid]) low = mid + 1;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1) {
            if(nums[0] == target) return 0;
            else return -1;
        }
        int pivot = findPivot(nums, 0, nums.size() - 1);
        if(pivot == -1) return binarySearch(nums, 0, nums.size() - 1, target);
        if(nums[pivot] == target) return pivot;
        if(nums[0] > target) return binarySearch(nums, pivot + 1, nums.size() - 1, target);
        return binarySearch(nums, 0, pivot - 1, target);
    }
};
