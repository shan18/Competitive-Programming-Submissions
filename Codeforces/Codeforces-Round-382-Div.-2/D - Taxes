// GNU C++14

#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0)
			return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;

    if(prime(n))
        cout << 1;
    else if(prime(n-2) || n%2==0)
        cout << 2;
    else
        cout << 3;
}
