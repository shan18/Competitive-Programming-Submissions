// C++14


#include <bits/stdc++.h>
using namespace std;

#define CO(x) cout << x << endl;


int main() {
	int n, k;
	cin >> n >> k;
	int t = (240 - k) / 5 * 2;
	int p = (sqrt(1 + 4 * t) - 1) / 2;
	if (p > n)
	    p = n;
	CO(p)
	return 0;
}
