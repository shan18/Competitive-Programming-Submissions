// GNU C++14

#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--) {
	    int k;
	    cin >> k;
	    int m = (k+1)/2;
	    for(int i=0; i<k; i++) {
	        for(int j=0; j<k; j++) {
	            if(i==j)
	                cout << m << " ";
	            else if(i>j) {
	                if((k-i+j+1)>m)
	                    cout << (k-i+j+1) << " ";
	                else
	                    cout << i-j-(k/2) << " ";
	            }
	            else {
	                if((m-j+i)>0)
	                    cout << m-j+i << " ";
	                else
	                    cout << j+1-i << " ";
	            }
	        }
	        cout << endl;
	    }
	}
	return 0;
}
