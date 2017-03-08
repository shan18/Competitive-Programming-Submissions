// C++ 14

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test;
	cin >> test;
 
	while(test--) {
		int n;
		cin >> n;
		int x[n], y[n];
		int xf_ys=0, xs_yf=0;
		for(int i=0; i<n; i++) {
			cin >> x[i];
			if(i%2==0)
				xf_ys += x[i];
			else
				xs_yf += x[i];
		}
		for(int i=0; i<n; i++) {
			cin >> y[i];
			if(i%2==0)
				xs_yf += y[i];
			else
				xf_ys += y[i];
		}
 
		if(xf_ys <= xs_yf)
			cout << xf_ys << endl;
		else
			cout << xs_yf << endl;
	}
} 
