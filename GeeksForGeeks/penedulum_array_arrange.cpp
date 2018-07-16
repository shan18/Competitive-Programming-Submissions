/*
 * Link to problem: https://practice.geeksforgeeks.org/problems/print-an-array-in-pendulum-arrangement/0/?track=SP-Arrays%20and%20Searching
 *  Solution Language: C++14
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--) {
	    int n;
	    cin >> n;
	    int a[n], b[n];
	    for(int i=0; i < n; i++) 
	        cin >> a[i];
	    sort(a, a+n);
	    b[(n-1)/2] = a[0];
	    int l_idx = (n-1)/2 - 1, r_idx = (n-1)/2 + 1;
	    for(int i=1; i<n; i++) {
	        if(i%2 != 0)
	            b[r_idx++] = a[i];
	        else
	            b[l_idx--] = a[i];
	    }
	    for(int i=0; i < n; i++)
	        cout << b[i] << " ";
	    cout << endl;
	}
	return 0;
}
