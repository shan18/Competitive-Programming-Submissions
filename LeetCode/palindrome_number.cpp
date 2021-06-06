// C++
// Problem Statement: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        int front = 0, last = num.length() - 1;
        while(front < last) {
            if(num[front] != num[last]) return false;
            front++; last--;
        }
        return true;
    }
};