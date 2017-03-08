// C++

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[5][5], lr, lc, moves = 0;
	
	for(int i=0; i<5; i++) {
	    for(int j=0; j<5; j++) {
	        cin >> a[i][j];
	        if(a[i][j]==1){
	            lr = i+1;
	            lc = j+1;
	            break;
	        }
	    }
	}
	moves = abs(lr-3) + abs(lc-3);
	cout << moves;
	return 0;
}
