// C++14

#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define FR freopen("input.txt", "r", stdin);
#define FW freopen("output.txt", "w", stdout);
#define SETPRES  std::setprecision(6),std::fixed;
#define pb push_back
#define mp make_pair
#define INF 10000000
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define Help_me  ios_base::sync_with_stdio(false);

int main() {
	Help_me
	#ifndef ONLINE_JUDGE
		FR
		FW
	#endif

	int a[101];
	a[0] = 0; a[1] = 1;

	for(int i = 2; i <= 100; i++) {
		a[i] = a[i - 1] + pow(i, 2);
	}

	while(true) {
		int n;
		cin >> n;
		if(n == 0)
			break;
		cout << a[n] << endl;
	}

    return 0;
}
