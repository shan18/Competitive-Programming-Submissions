// GNU C++

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string s, u;
	cin >> s >> u;
	
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	transform(u.begin(), u.end(), u.begin(), ::tolower);
	
	if(s.compare(u)==0)
	    cout << 0;
	else if(s.compare(u)<0)
	    cout << -1;
	else
	    cout << 1;
	return 0;
}
