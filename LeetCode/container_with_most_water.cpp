// C++
// Problem Statement: https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int marea = 0;
        int i = 0, j = height.size() - 1;
        while(i < j) {
            int area = min(height[i], height[j]) * (j - i);
            if (area > marea) marea = area;
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return marea;
    }
};
