// C++14

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test;
	cin >> test;
	
	while(test--) {
	    int n;
	    cin >> n;
	    int a[n];
	    
	    int unpaid = 0, dues = 0;
	    for(int i=0; i<n; i++) {
	        cin >> a[i];
	        if(a[i] == 0) {
	            unpaid++;
	            dues++;
	        }
	        else if(a[i]==1 && unpaid!=0) {
	            dues++;
	        }
	    }
	    
	    cout << unpaid*1000 + dues*100 << endl;
	}
	return 0;
}
