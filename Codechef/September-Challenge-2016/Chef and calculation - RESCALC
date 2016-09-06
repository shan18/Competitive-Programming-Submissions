// GNU C++14



#include <bits/stdc++.h>
using namespace std;

int check(int a[]) {
    int f = 0;
    for(int j=1; j<7; j++) {
        if(a[j]!=0)
            f++;
    }
    return f;
}

int del(int a[]) {
    for(int j=1; j<7; j++) {
        if(a[j]!=0)
            a[j]--;
    }
}


int main() {
    int test, p, c, pts, d, f;
    cin >> test;
    while(test--) {
        int max = 0, player = 0;
        cin >> p;
        for(int i=1; i<=p; i++) {
            int v[] = {0,0,0,0,0,0,0};
            pts = f = 0;
            cin >> c;
            
            pts += c;
            
            for(int j=1; j<=c; j++) {
                cin >> d;
                v[d]++;
            }
            
            f = check(v);
            while(f>=4) {
                if(f==4 || f==5)
                    pts += f-3;
                else if(f==6)
                    pts += 4;
                del(v);
                f = check(v);
            }
            
            if(pts==max) {
                player = 0;
            }
            else if(pts>max) {
                max = pts;
                player = i;
            }
        }
        if(player==0)
            cout<<"tie"<<endl;
        else if(player==1)
            cout<<"chef"<<endl;
        else if(player)
            cout<<player<<endl;
    }
    
    return 0;
}
