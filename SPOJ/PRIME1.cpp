// C++14

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if(n == 1)
        return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n%i == 0 && n!=i)
            return false;
    }
    return true;
}

int main() {
	int test;
	cin >> test;
	while(test--) {
	    int m, n;
	    cin >> m >> n;
	    if(m%2 == 0) {
	        for(int i = m+1; i <= n; i+=2) {
	            if(i==3)
	                cout << 2 << endl;
	            if(is_prime(i))
	                cout << i << endl;
	        }
	    } else {
	        for(int i = m; i <= n; i+=2) {
	            if(i==1)
	                cout << 2 << endl;
	            else if(is_prime(i))
	                cout << i << endl;
	        }
	    }
	    cout << endl;
	}
	return 0;
}

