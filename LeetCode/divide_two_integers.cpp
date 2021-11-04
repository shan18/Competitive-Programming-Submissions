// C++
// Problem Statement: https://leetcode.com/problems/divide-two-integers/

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor == INT_MIN) {
            if(dividend == INT_MIN) return 1;
            else return 0;
        }
        
        if(dividend == INT_MIN) {
            if(divisor == -1) return INT_MAX;
            else if(divisor == 1) return INT_MIN;
            else if(divisor > 0) return -1 + divide(dividend + divisor, divisor);
            else if(divisor < 0) return 1 + divide(dividend - divisor, divisor);
        }
        
        bool isNegative = false;
        if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
            isNegative = true;
        }
        dividend = abs(dividend);
        divisor = abs(divisor);
        
        int quotient = 0;
        while(dividend - divisor >= 0) {
            int count = 0;
            while((divisor << 1 << count) > 0 && dividend >= (divisor << 1 << count)) {
                count++;
            }
            quotient += 1 << count;
            dividend -= divisor << count;
        }
        
        if(isNegative) quotient = -quotient;
        return quotient;
    }
};
