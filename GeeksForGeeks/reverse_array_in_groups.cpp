/*
 * Link to problem: https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0/?track=SP-Arrays%20and%20Searching
 *  Solution Language: C++14
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--) {
	    int n, k;
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    cin >> k;
	    for(int i = 0; i < n-k; i+=k) {
	        for(int j = k+i-1; j >= i; j--)
	            cout << a[j] << " ";
	    }
	    if(n % k != 0) {
    	    for(int i=n-1; i >= n - (n % k); i--)
    	        cout << a[i] << " ";
	    } else {
	        for(int i=n-1; i >= n-k; i--)
	            cout << a[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}

