// c++14

#include <bits/stdc++.h>
using namespace std;

int main() {

	int test, max = 0, p = 0, p1_t=0, p2_t=0;
	cin >> test;
	while(test--) {
		int p1, p2;
		cin >> p1 >> p2;
		p1_t += p1;
		p2_t += p2;
		
		int lead = p1_t-p2_t;
		if(abs(lead) > max) {
			max = abs(lead);
			p = lead>0 ? 1:2;
		}
	}
	cout << p << " " << max << endl;

	return 0;
}
