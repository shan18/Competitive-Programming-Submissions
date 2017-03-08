// GNU C++14

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	
	if(n==1 || m==1)
	    cout << "Akshat";
	else if(n%2!=0 && m%2!=0)
	    cout << "Akshat";
	else if(n%2==0 && m%2==0)
	    cout << "Malvika";
	else if(n%2==0 && m%2!=0) {
	    if(n<m)
	        cout << "Malvika";
	    else
	        cout << "Akshat";
	}
	else if(n%2!=0 && m%2==0) {
	    if(n>m)
	        cout << "Malvika";
	    else
	        cout << "Akshat";
	}
}
