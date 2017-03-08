// GNU C++14

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test, i, j, f;
	cin >> test;
	string s;
	while(test--) {
	    f = 0;
	    cin >> s;
	    if(s.size()%2==0) {
    	    for(i=0, j=s.size()-1; i<j; i++, j--) {
    	        if(s[i]=='.' && s[j]=='.') {
    	            s[i] = 'a';
    	            s[j] = 'a';
    	        }
    	        else if(s[i]=='.')
    	            s[i] = s[j];
    	        else if(s[j]=='.')
    	            s[j] = s[i];
    	        else if(s[i]!=s[j]) {
    	            f = 1;
    	            cout << -1 << endl;
    	            break;
    	        }
    	    }
	    }
	    else {
	        for(i=0, j=s.size()-1; i<=j; i++, j--) {
    	        if(s[i]=='.' && s[j]=='.') {
    	            s[i] = 'a';
    	            s[j] = 'a';
    	        }
    	        else if(i==j && s[i]=='.')
	                s[i] = 'a';
    	        else if(s[i]=='.')
    	            s[i] = s[j];
    	        else if(s[j]=='.')
    	            s[j] = s[i];
    	        else if(s[i]!=s[j]) {
    	            f = 1;
    	            cout << -1 << endl;
    	            break;
    	        }
    	    }
	    }
	    if(!f)
	        cout << s << endl;
	}
	
	return 0;
}  
