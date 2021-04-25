// C++
// Problem Statement: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        vector<int> answer(2);
        while(i != j) {
            int sum = numbers[i] + numbers[j];
            if(sum == target) {
                answer[0] = i + 1;
                answer[1] = j + 1;
                return answer;
            } else if (sum > target) {
                j--;
            } else {
                i++;
            }
        }
        return answer;
    }
};
