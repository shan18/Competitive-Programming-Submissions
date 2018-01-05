// C++14

#include <bits/stdc++.h>
using namespace std;

#define FOR(x, y) for(i=x; i<=y; i++)

int main() {
    int i, j, k;
    
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int a[n1], b[n2], c[n3];
	FOR(0, n1-1)
	    cin >> a[i];
	FOR(0, n2-1)
	    cin >> b[i];
	FOR(0, n3-1)
	    cin >> c[i];
	
	i = j = k = 0;
	vector<int> v;
	while(i<n1 && j<n2 && k<n3) {
	    if(a[i] == b[j]) {
	        v.push_back(a[i]);
	        i++; j++;
	    } else if(a[i] == c[k]) {
	        v.push_back(a[i]);
	        i++; k++;
	    } else if(b[j] == c[k]) {
	        v.push_back(b[j]);
	        j++; k++;
	    } else if(a[i]<b[j] && a[i]<c[k])
	        i++;
	    else if(b[j]<a[i] && b[j]<c[k])
	        j++;
	    else if(c[k]<a[i] && c[k]<a[i])
	        k++;
	}
	
	while(i<n1 && j<n2) {
	    if(a[i] == b[j]) {
	        v.push_back(a[i]);
	        i++; j++;
	    } else if(a[i] < b[j])
	        i++;
	    else if(b[j] < a[i])
	        j++;
	}
	
	while(i<n1 && k<n3) {
	    if(a[i] == c[k]) {
	        v.push_back(a[i]);
	        i++; k++;
	    } else if(a[i] < c[k])
	        i++;
	    else if(c[k] < a[i])
	        k++;
	}
	
	while(j<n2 && k<n3) {
	    if(b[j] == c[k]) {
	        v.push_back(b[j]);
	        j++; k++;
	    } else if(b[j] < c[k])
	        j++;
	    else if(c[k] < b[j])
	        k++;
	}
	
	cout << v.size() << endl;
	FOR(0, v.size()-1)
	    cout << v[i] << endl;

	return 0;
}
