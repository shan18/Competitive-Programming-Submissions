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

	while(true) {
		int a, b, c;
		cin >> a >> b >> c;
		if(a == 0 && b == 0 && c == 0)
			break;
		if(c-b == b-a)
			cout << "AP " << c + (c-b) << endl;
		else
			cout << "GP " << c * (c/b) << endl;
	}

    return 0;
}
