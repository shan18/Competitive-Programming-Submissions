// GNU C++14

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, m, d=0;
	cin >> n >> m;
	
	if(n>=m) {
    	while(n>=m) {
    	    d += m;
    	    n -= (m-1);
    	}
    	cout << d+n;
	}
	else {
	    cout << n;
	}
	return 0;
}
