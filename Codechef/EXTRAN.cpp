// C++14

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test;
	cin >> test;
 
	while(test--) {
		int n;
		cin >> n;
		int a[n];
 
		for(int i=0; i<n; i++)
			cin >> a[i];
		sort(a, a+n);
 
		if(abs(a[0] - a[1]) != 1)
			cout << a[0] << endl;
		else if(abs(a[n-2] - a[n-1]) != 1)
			cout << a[n-1] << endl;
		else {
		    for(int i=1; i<n-2; i++) {
		        if(a[i] == a[i+1]) {
		            cout << a[i] << endl;
		            break;
		        }
		    }
		}
	}
} 
