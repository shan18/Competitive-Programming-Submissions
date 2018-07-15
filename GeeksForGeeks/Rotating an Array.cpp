/*
 * Link to problem: https://practice.geeksforgeeks.org/problems/reversal-algorithm/0/?track=SP-Arrays%20and%20Searching
 *  Solution Language: C++14
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--) {
	    int n, d;
	    cin >> n;
	    int a[n];
	    for(int i=0; i < n; i++) 
	        cin >> a[i];
	    cin >> d;
	    
	    for(int i=d; i<n; i++)
	        cout << a[i] << " ";
	    for(int i=0; i<d; i++)
	        cout << a[i] << " ";
	    cout << endl;
	}
	return 0;
}
