// C++14


#include <bits/stdc++.h>
using namespace std;

#define FOR(s, f) for(int i = 0; i < f; i++)
#define COUT(x) cout << x << endl;

int main() {
	int n;
	cin >> n;
	map<int, int> m;
	vector<int> v(n);
	
	FOR(0, n) {
	    int a, b;
	    cin >> a >> b;
	    m.insert(pair<int, int>(a, b));
	    v[i] = a;
	}
	sort(v.begin(), v.end());
	
	FOR(0, n-1) {
	    if (m[v[i]] > m[v[i+1]]) {
	        cout << "Happy Alex";
	        return 0;
	    }
	}
	cout << "Poor Alex";
	return 0;
}
