// C++14


#include <bits/stdc++.h>
using namespace std;
 
#define IF if(n < 1000 & k < 1000 & p < 1000)
#define P(x) cout << x << endl;
 
vector<int> one; // number of 1's in all windows
vector<int> a;  // Input array
multiset<int> m;
 
// counts the number of 1's in all windows
void count_window(int n, int k) {
    int count = 0, c = 0;
    for (int j = 0; j < k; j++) {
        count += a[j];
    }
    one.push_back(count);
    m.insert(count);
    for (int j = k; j < n; j++) {
        count = count - a[c] + a[j];
        one.push_back(count);
        m.insert(count);
        c++;
    }
}
 
// adds the new window by replacing the last one
void new_win(int w, int i, int add, int sub) {
    one[i] = one[w] + a[add] - a[sub];
}
 
int main() {
	int n, k, p;
	cin >> n >> k >> p;
	for(int i = 0; i < n; i++) {
	    int z;
	    cin >> z;
	    a.push_back(z);
	}
	string s;
	cin >> s;
	
	count_window(n, k);
	int li = one.size() - 1, sub = k - 1, add = n - 1, w = 0;
	int ct = 1;
	for (int i = 0; i < p; i++) {
	    if(s[i] == '!') {
	        
	        IF {
	            rotate(a.rbegin(), a.rbegin() + 1, a.rend());
	            continue;
	        }
	        
	        if (li == -1)
	            li = one.size() - 1;
	        if (add == -1)
	            add = n - 1;
	        if (sub == -1)
	            sub = n - 1;
	        multiset<int>::iterator it = m.find(one[li]);
	        m.erase(it);
	        new_win(w, li, add--, sub--);
	        m.insert(one[li]);
	        w = li;
	        li--;
	    } else if(s[i] == '?') {
	        
	        IF {
	            m.clear();
	            count_window(n, k);
	        }
	        
	        multiset<int>::reverse_iterator it = m.rbegin();
	        cout << *it << endl;
	    }
	}
	return 0;
}
