// C++
// link for question: https://www.hackerrank.com/contests/w22/challenges/cookie-party

#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    
    if(n>=m)
        cout << n-m;
    else
        cout << n-(m%n);
    return 0;
}
