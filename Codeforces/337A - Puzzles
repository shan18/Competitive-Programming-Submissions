// GNU C++14

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int p[m];
	for(int i=0; i<m; i++)
	    cin >> p[i];
	sort(p, p+m);
	int d = 1000;
	for(int i=0; i<=m-n; i++) {
	    int *max = max_element(p+i, p+n+i);
	    int *min = min_element(p+i, p+n+i);
	    if(*max-*min<d)
	        d = *max-*min;
	}
	
	cout << d;
	
	return 0;
}
