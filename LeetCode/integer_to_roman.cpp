// C++
// Problem Statement: https://leetcode.com/problems/integer-to-roman/

class Solution {
public:
    map<int, string> symbol;
    
    void setMaps() {
        symbol.insert(pair<int, string>(1, "I"));
        symbol.insert(pair<int, string>(5, "V"));
        symbol.insert(pair<int, string>(10, "X"));
        symbol.insert(pair<int, string>(50, "L"));
        symbol.insert(pair<int, string>(100, "C"));
        symbol.insert(pair<int, string>(500, "D"));
        symbol.insert(pair<int, string>(1000, "M"));
        
        symbol.insert(pair<int, string>(4, "IV"));
        symbol.insert(pair<int, string>(9, "IX"));
        symbol.insert(pair<int, string>(40, "XL"));
        symbol.insert(pair<int, string>(90, "XC"));
        symbol.insert(pair<int, string>(400, "CD"));
        symbol.insert(pair<int, string>(900, "CM"));
        
        symbol.insert(pair<int, string>(2, "II"));
        symbol.insert(pair<int, string>(3, "III"));
        symbol.insert(pair<int, string>(6, "VI"));
        symbol.insert(pair<int, string>(7, "VII"));
        symbol.insert(pair<int, string>(8, "VIII"));
        
    }
    
    string getDefined(int num) {
        if(symbol.find(num) != symbol.end()) {
            return symbol.find(num)->second;
        }
        return "";
    }
    
    string getLargestFactor(int num) {
        string factorRoman = "";
        int arr[] = {1000, 500, 100, 50, 10, 5};
        for(int i: arr) {
            while(num >= i) {
                factorRoman += getDefined(i);
                num -= i;
            }
        }
        return factorRoman;
    }
    
    string getRoman(int num) {
        string roman = "";
        int order = 0;
        while(num != 0) {
            int digit = num % 10;
            
            if (digit > 0) {
                int orderNum = digit * pow(10, order);
                string orderNumRoman = getDefined(orderNum);
                if(orderNumRoman != "") {
                    roman = orderNumRoman + roman;
                } else {
                    roman = getLargestFactor(orderNum) + roman;
                }
            }
            
            num = num / 10;
            order++;
        }
        return roman;
    }
    
    string intToRoman(int num) {
        setMaps();
        
        return getRoman(num);
    }
};
