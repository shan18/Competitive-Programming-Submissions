// C++
// Problem Statement: https://leetcode.com/problems/regular-expression-matching/

class Solution {
public:
    bool isMatch(string s, string p) {
        bool dp[s.length() + 1][p.length() + 1];
        for(int i = 0; i <= s.length(); i++) {
            for(int j = 0; j <= p.length(); j++) {
                if (i == 0 && j == 0)
                    dp[i][j] = true;
                else if(j == 0)
                    dp[i][j] = false;
                else if(i == 0) {
                    if(p[j-1] == '*')
                        dp[i][j] = dp[i][j-2];
                    else
                        dp[i][j] = false;
                }
                else {
                    if(s[i-1] == p[j-1] || p[j-1] == '.')
                        dp[i][j] = dp[i-1][j-1];
                    else if(p[j-1] == '*') {
                        dp[i][j] = dp[i][j-2];
                        if(s[i-1] == p[j-2] || p[j-2] == '.')
                            dp[i][j] = dp[i][j] || dp[i-1][j];
                    } else
                        dp[i][j] = false;
                }
            }
        }
        return dp[s.length()][p.length()];
    }
};
