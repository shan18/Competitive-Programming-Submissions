// C++14

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test;
	cin >> test;
 
	while(test--) {
		int n, one = 0, count = 0, bandwidth = 0;
		cin >> n;
		int a[n][n];
		
		for(int i=0; i<n; i++) {
		    for(int j=0; j<n; j++) {
		        cin >> a[i][j];
		        if(a[i][j] == 1)
		            one++;
		    }
		}
		
		if(one <= n)
		    cout << bandwidth << endl;
		else {
		    bandwidth++;
		    count = n + (n - bandwidth)*2;
		    while(count <= n*n) {
		        if(one <= count) {
		            cout << bandwidth << endl;
		            break;
		        }
		        bandwidth++;
		        count += (n - bandwidth)*2;
		    }
		}
	}
}
