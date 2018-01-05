// C++14

#include <bits/stdc++.h>
using namespace std;

#define MAXN 1111111
#define FOR(x, y) for(i=x; i<=y; i++)

typedef long long ll;
ll a[MAXN];

int main() {
    int i;
    ll j;
    
	int n, m;
	scanf("%d %d", &n, &m);
	int q[m];
	queue<ll> q1, q2;
	FOR(0, n-1)
	    scanf("%lld" , a+i);
	
	sort(a, a+n);
	for(i=n-1; i>=0; i--)
	    q1.push(a[i]);
	
	FOR(0, m-1) {
	    cin >> q[i];
	}
	
	int k = 0, f = 2;
	FOR(1, q[m-1]) {
	    if(i == q[k]) {
	        printf("%lld\n", max(q1.front(), q2.front()));
	        k++;
	    }
	    if(f == 2) {
    	    if(q1.front() >= q2.front()) {
    	        q2.push(q1.front() / 2);
    	        q1.pop();
    	    } else {
    	        q2.push(q2.front() / 2);
    	        q2.pop();
    	    }
	    } else {
	        if(q1.front() >= q2.front()) {
    	        q1.push(q1.front() / 2);
    	        q1.pop();
    	    } else {
    	        q1.push(q2.front() / 2);
    	        q2.pop();
    	    }
	    }
	}

	return 0;
}
