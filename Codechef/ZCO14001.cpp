// C++14

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, h;
    cin >> n >> h;
    int box[n];
    for(int i=0; i < n; i++)
        cin >> box[i];
    vector<int> commands;
    int temp;
    do {
        cin >> temp;
        commands.push_back(temp);
    }while(temp != 0);
    int pos = 0; bool pick = false;
    
    for(int i: commands) {
        if(i == 1 && pos > 0)
            pos--;
        else if(i == 2 && pos < n-1)
            pos++;
        else if(i == 3 && !pick && box[pos] > 0) {
            pick = true;
            box[pos]--;
        } else if(i == 4 && pick && box[pos] < h) {
            pick = false;
            box[pos]++;
        }
    }
    
    for(int i: box)
        cout << i << " ";

	return 0;
}

