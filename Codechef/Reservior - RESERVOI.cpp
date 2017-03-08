// GNU C++14

# include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        bool flag = true;
        int n, m;
        cin >> n >> m;
        char r[n][m];
        for(int i=0; i<n; i++) {
            string s;
            cin >> s;
            for(int j=0; j<m; j++)
                r[i][j] = s[j];
        }
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                char up, down, left, right;
                up = down = left = right = ' ';
                
                // surround check
                if(i!=0)
                    up = r[i-1][j];
                if(i!=n-1)
                    down = r[i+1][j];
                if(j!=0)
                    left = r[i][j-1];
                if(j!=m-1)
                    right = r[i][j+1];
                
                // block check
                if(r[i][j]=='W') {
                    if(j==0 || i==n-1 || j==m-1) {
                        flag = false;
                        break;
                    }
                    else if(right=='A' || left=='A' || up=='B' || down=='A') {
                        flag = false;
                        break;
                    }
                }
                else if(r[i][j]=='A') {
                    if(up=='B' || up=='W' || up=='W' || up=='W') {
                        flag = false;
                        break;
                    }
                }
                else {
                    if(down=='W' || down=='A') {
                        flag = false;
                        break;
                    }
                }
            }
            if(!flag)
                break;
        }
        if(flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
