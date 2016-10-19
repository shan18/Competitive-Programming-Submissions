// GNU C++14

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, left;
	cin >> a >> b;
	
	int hours = a;
	
	while(a>=b) {
	    left = a%b;
	    a /= b;
	    hours += a;
	    a += left;
	}
	
	cout << hours;
	return 0;
}
