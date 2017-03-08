// C++

# include <iostream>
using namespace std;

int main() {
    
    int test;
    cin >> test;
    
    int a, b;
    int max = 0;
    int current = 0;
    
    while(test--) {
        cin >> a >> b;
        current += b - a;
        if(current > max)
            max = current;
    }
    
    cout << max;
}
