// C++
// Problem Statement: https://leetcode.com/problems/teemo-attacking/

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int seconds = duration;
        int poisonEnd = timeSeries[0] + duration - 1;
        
        for(int i = 1; i < timeSeries.size(); i++) {
            if(timeSeries[i] <= poisonEnd) {
                seconds -= (poisonEnd - timeSeries[i] + 1);
            }
            seconds += duration;
            poisonEnd = timeSeries[i] + duration - 1;
        }
        
        return seconds;
    }
};
