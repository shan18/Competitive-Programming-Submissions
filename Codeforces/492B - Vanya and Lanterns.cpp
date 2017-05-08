// GNU C++14


#include <bits/stdc++.h>
using namespace std;

#define FI(s, f) for (int i = s; i < f; i++)


int main() {
	int n, l;
	cin >> n >> l;
	vector<int> a(n);
	FI(0, n) {
	    cin >> a[i];
	}
	sort(a.begin(), a.end());
	
	int m = max(a[0], l - a[n - 1]) * 2;
	FI(1, a.size()) {
	    m = max(m, a[i] - a[i - 1]);
	}
	
	printf("%lf", m/2.0);
	return 0;
}
