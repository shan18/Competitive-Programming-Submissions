// GNU C++
// link: https://www.hackerrank.com/challenges/birthday-cake-candles


#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, freq = 0;
    cin >> n;
    vector<int> height(n);
    int max = 0;
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
       if(max < height[height_i])
           max = height[height_i];
    }
    
    for(int i = 0; i < n; i++) {
        if(height[i] == max)
            freq++;
    }
    
    cout << freq;
    
    return 0;
}
