// C++14


#include <bits/stdc++.h>
using namespace std;
 
#define FOR(s, f) for (int i = s; i < f; i++)
#define COUT(x) cout << x << endl;
 
int main() {
	int test;
	cin >> test;
	while (test--) {
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    //vector<int> b(n);
	    int max = -1;
	    
	    FOR(0, n) {
	        cin >> a[i];
	        //b[a[i]] = 1;
	        if (max < a[i])
	            max = a[i];
	    }
	    
	    COUT(n - max)
	}
	return 0;
} 
