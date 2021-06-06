// C++
// Problem Statement: https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        map<string, int> amap;
        answer.push_back("()");
        amap["()"] = 1;
        while(--n) {
            int size = answer.size();
            for(int i = 0; i < size; i++) {
                if(amap.find("()" + answer[i]) == amap.end()) {
                    answer.push_back("()" + answer[i]);
                    amap["()" + answer[i]] = 1;
                }
                if(amap.find(answer[i] + "()") == amap.end()) {
                    answer.push_back(answer[i] + "()");
                    amap[answer[i] + "()"] = 1;
                }
                answer[i] = "(" + answer[i] + ")";
            }
        }
        return answer;
    }
};
