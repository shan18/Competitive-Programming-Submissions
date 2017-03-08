// GNU C++14

#include <bits/stdc++.h>
using namespace std;

int main() {
	int y;
	cin >> y;
	for(int i=y+1; ; i++) {
	    bool f = true;
	    int j = i;
    	vector <int> v(10, 0);
    	while(j!=0) {
    	    v[j%10]++;
    	    j /= 10;
    	}
    	for(int k=0; k<10; k++) {
    	    if(v[k]>1) {
    	        f = false;
    	        break;
    	    }
    	}
    	if(f) {
    	    cout << i;
    	    return 0;
    	}
	}
	
	return 0;
}
