// GNU C++
// link: https://www.hackerrank.com/challenges/mini-max-sum

#include <bits/stdc++.h>
using namespace std;

int main(){
    long int a[5], sum = 0;
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + 5);
    
    cout << sum - a[4] << " " << sum - a[0];
    return 0;
}
