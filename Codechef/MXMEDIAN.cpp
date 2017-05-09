// C++14


#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test;
	cin >> test;
	while (test--) {
	    int n;
	    cin >> n;
	    vector<int> a(2 * n), sa, ma(2 * n);
	    for(int i = 0; i < 2*n; i++) {
	        cin >> a[i];
	        sa.push_back(a[i]);
	    }
	    sort(sa.begin(), sa.end());
	    
	    int median_loc = (n + 1) / 2;
	    int median = sa[2*n - median_loc];
	    
	    int k = 2*n - 1;
	    for(int i = 0, j = 2*n - 1; i <= j; i++, j--) {
	        ma[k] = sa[j];
	        ma[k-1] = sa[i];
	        k -= 2;
	    }
	    
	    cout << median << endl;
	    for(int i = 0; i < 2*n; i++)
	        cout << ma[i] << " ";
	    cout << endl;
	}
	return 0;
} 
