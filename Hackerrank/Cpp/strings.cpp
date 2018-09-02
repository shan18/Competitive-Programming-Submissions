// C++
// Problem Statement: https://www.hackerrank.com/challenges/c-tutorial-strings/problem


#include <bits/stdc++.h>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a;
    cin >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;
    swap(a[0], b[0]);
    cout << a << " " << b;
    return 0;
}

