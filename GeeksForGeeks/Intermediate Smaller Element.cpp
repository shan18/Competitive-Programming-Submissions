/*
 * Link to problem: https://practice.geeksforgeeks.org/problems/immediate-smaller-element/0/?track=SP-Arrays%20and%20Searching
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
	    int a[n];
	    cin >> a[0];
	    for(int i=1; i<n; i++) {
	        cin >> a[i];
	        if(a[i-1] > a[i])
	            cout << a[i] << " ";
	        else
	            cout << -1 << " ";
	    }
	    cout << -1 << endl;
	}
	return 0;
}
