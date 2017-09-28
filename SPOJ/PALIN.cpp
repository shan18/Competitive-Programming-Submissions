// C++14

#include <bits/stdc++.h>
using namespace std;

string carry(string k, int i, int j, int l) {
    k[l/2] = '0';
    while(i>=0 && k[i] == '9') {
        k[i] = k[j] = '0';
        i--; j++;
    }
    if(i < 0) {
        k = "1" + k;
        k[l] = '1';
    } else
        k[j] = ++k[i];
    return k;
}

int main() {
	int test;
	cin >> test;
	while(test--) {
	    string k;
	    cin >> k;
	    int l = k.length();
	    int i = -1, j = l;
	    while(++i <= --j) {
	        if(k[i] != k[j])
	            break;
	    }
	    
	    if(i >= j) {    // palindrome
	        if(l & 1) {     // odd palindrome
	            if(k[l/2] != '9')
	                k[l/2]++;
	            else {
	                k[l/2] = '0';
	                i = l/2 - 1;
	                j = l/2 + 1;
	                while(i >= 0 && k[i] == '9') {
	                    k[i] = k[j] = '0';
	                    i--; j++;
	                }
	                if(i < 0) {
	                    k = "1" + k;
	                    k[l] = '1';
	                } else {
	                    k[i]++; k[j]++;
	                }
	            }
	        } else {    // even palindrome
	            j = l / 2;
	            i = j - 1;
	            if(k[i] != '9') {
	                k[i]++; k[j]++;
	            } else {
	                while(i >= 0 && k[i] == '9') {
	                    k[i] = k[j] = '0';
	                    i--; j++;
	                }
	                if(i < 0) {
	                    k = "1" + k;
	                    k[l] = '1';
	                } else {
	                    k[i]++; k[j]++;
	                }
	            }
	        }
	    } else {    // not palindrome
	        if(l & 1) {     // odd not palindrome
	            i = l/2 - 1;
	            j = l/2 + 1;
	        } else {    // even not palindrome
	            j = l / 2;
	            i = j - 1;
	        }
	        int flag = 0;
	        while(i >= 0) {
	        	if(k[i] - k[j] > 0) {
	        		flag = 1;
	        		break;
	        	} else if(k[i] - k[j] < 0) {
	        		flag = 2;
	        		break;
	        	}
	        	i--; j++;
	        }
	        if(l & 1) {     // odd not palindrome
	            i = l/2 - 1;
	            j = l/2 + 1;
	        } else {    // even not palindrome
	            j = l / 2;
	            i = j - 1;
	        }
	        if(flag == 1) {
	        	while(i >= 0) {
	        		k[j] = k[i];
	        		i--; j++;
	        	}
	        } else if(flag == 2 && l&1 && k[l/2] != '9') {
	        	k[l/2]++;
	        	i = l/2 - 1; j = l/2 + 1;
				while(i >= 0) {
	        		k[j] = k[i];
	        		i--; j++;
	        	}
	        } else {
	        	if(l & 1)
	        		k[l/2] = '0';
	        	while(i >= 0) {
	        		if(k[i] < '9') {
	        			k[j] = ++k[i];
	        			break;
	        		} else
	        			k[i] = k[j] = '0';
	        		i--; j++;
	        	}
	        	while(i >= 0) {
	        		k[j] = k[i];
	        		i--; j++;
	        	}
	        }
	    }
	    cout << k << endl;
	}
	return 0;
}
