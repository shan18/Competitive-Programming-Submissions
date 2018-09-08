// C++14

#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
	    int n, k;
	    cin >> n >> k;
	    set<int> ingredients;
	    int islands_visited = 0;
	    for (int i=1; i<=n; i++) {
	        int num;
	        cin >> num;
	        for (int j=0; j<num; j++) {
	            int ing;
	            cin >> ing;
	            ingredients.insert(ing);
	        }
	        if (ingredients.size() >= k && islands_visited == 0) {
	            islands_visited = i;
	        }
	    }
	    if (islands_visited == 0)
	        cout << "sad" << endl;
	    else if (islands_visited < n)
	        cout << "some" << endl;
	    else
	        cout << "all" << endl;
	}
	return 0;
}

