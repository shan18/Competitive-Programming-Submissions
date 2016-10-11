// GNU C++14

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p, l=0, max=0;
	cin >> n;
	vector <int> v;
	for(int i=0; i<n; i++) {
		cin >> p;
		v.push_back(p);
		if(i>0) {
			if(v[i] >= v[i-1])
				l++;
			else
				l = 0;
		}
		if(l>max)
			max = l;
	}
	cout << max+1 << endl;
}
