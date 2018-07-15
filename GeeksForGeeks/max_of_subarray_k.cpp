/*
 * Link to problem: https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0/?track=SP-Arrays%20and%20Searching
 *  Solution Language: C++14
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--) {
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    for(int i=0; i <= n-k; i++) {
	        cout << *max_element(a+i, a+i+k) << " ";
	    }
	    cout << endl;
	}
	return 0;
}

