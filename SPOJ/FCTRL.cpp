// C++14

#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--) {
	    int n;
	    cin >> n;
	    int zeros = 0;
	    for(int i = 1; pow(5,i) <= n; i++) {
	        zeros += n / pow(5,i);
	    }
	    cout << zeros << endl;
	}
	return 0;
}
