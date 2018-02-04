// C++14

#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j;
    
    int test;
    cin >> test;
    while(test--) {
        int a[4];
        int b = -1, c = -1, bf=0, cf=0;
        for(i=0; i < 4; i++) {
            cin >> a[i];
            if(i == 0) {
                b = a[i];
                bf++;
            } else if(a[i] == b)
                bf++;
            else if(c == -1) {
                c = a[i];
                cf++;
            } else if(a[i] == c)
                cf++;
        }
        if(bf == 4 || bf == 2 && cf == 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

	return 0;
}
