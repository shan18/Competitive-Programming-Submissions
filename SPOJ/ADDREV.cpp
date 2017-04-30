// C++14
// link: http://www.spoj.com/problems/ADDREV


#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int r = 0;
    while(x != 0) {
        r = r*10 + x%10;
        x /= 10;
    }
    return r;
}

int main() {
	int n;
	cin >> n;
	
	while(n--) {
	    int a, b;
	    cin >> a >> b;
	    a = reverse(a);
	    b = reverse(b);
	    cout << reverse(a + b) << endl;
	}
	return 0;
}
