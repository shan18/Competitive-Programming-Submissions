// C++14


#include <bits/stdc++.h>
using namespace std;
 
#define FOR(start, finish) for (int i = start; i < finish; i++)
 
 
int trie[2*1000006][27];
int nxt = 1;
set<string> firewall;
 
void build(string s) {
    int v = 0;
    FOR(0, s.length()) {
        int key = s[i] - 'a';
        if (trie[v][key] == -1)
            trie[v][key] = nxt++;
        v = trie[v][key];
    }
}
 
bool search(string s) {
    int v = 0;
    FOR(0, s.length()) {
        int key = s[i] - 'a';
        if (trie[v][key] == -1) {
            firewall.insert(s.substr(0,i+1));
            return true;
        }
        v = trie[v][key];
    }
    return false;
}
 
int main() {
    
    memset(trie, -1, sizeof(trie));
    
	int n;
	cin >> n;
	
	vector<string> rejected;
	FOR(0, n) {
	    string c, website;
	    cin >> c >> website;
	    if (c == "+")
	        build(website);
	    else
	        rejected.push_back(website);
	}
	
	FOR(0, rejected.size()) {
	    if (!search(rejected[i])) {
	        cout << -1 << endl;
	        return 0;
	    }
	}
	
	cout << firewall.size() << endl;
	for (set<string>::iterator it = firewall.begin(); it != firewall.end(); it++)
	    cout << *it << endl;
 
	return 0;
} 
