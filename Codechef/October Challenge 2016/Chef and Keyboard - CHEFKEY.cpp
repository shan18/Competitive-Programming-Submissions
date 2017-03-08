// GNU C++14

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int test, n, m, c;
    cin >> test;
    while(test--) {
        cin >> n >> m >> c;
        int p = 0;
        if(n>=m) {
            for(int i=1; i<=n; i++) {
                if(c%i==0 && (c/i)<=m)
                    p++;
            }
        }
        else {
            for(int i=1; i<=m; i++) {
                if(c%i==0 && (c/i)<=n)
                    p++;
            }
        }
        
        cout << p << endl;
    }
    return 0;
} 
