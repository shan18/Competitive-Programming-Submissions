/*
 * Link to problem: https://practice.geeksforgeeks.org/problems/reverse-an-array/0/?track=SP-Arrays%20and%20Searching
 * Solution Language: C++14
*/

#include <iostream>
using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--) {
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0; i<n; i++)
	        cin >> a[i];
	    for(int i=n-1; i>=0; i--)
	        cout << a[i] << " ";
	    cout << endl;
	}
	return 0;
}

