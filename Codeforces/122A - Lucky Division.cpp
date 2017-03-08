// GNU C++11

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, f=1;
	cin >> n;
	int p = n;
	
	while(p!=0) {
	    int d = p%10;
	    if(d!=4 && d!=7) {
	        f = 0;
	        break;
	    }
	    p = p/10;
	}
	
	if(f==1 || n%4==0 || n%7==0 || n%47==0)
	    cout << "YES";
	else
	    cout << "NO";
	return 0;
}
