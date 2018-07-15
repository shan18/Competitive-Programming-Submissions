/*
 * Link to problem: https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0/?track=SP-Arrays%20and%20Searching
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
	    for(int i=0; i < n; i++)
	        cin >> a[i];
	    vector<int> b;
	    int max = a[n-1];
	    b.push_back(max);
	    for(int i=n-2; i >= 0; i--) {
	        if(a[i] > max) {
	            max = a[i];
	            b.push_back(max);
	        }
	    }
	    for(int i=b.size()-1; i >= 0; i--)
	        cout << b[i] << " ";
	    cout << endl;
	}
	return 0;
}

