#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int a, m; cin >> a >> m;
        bool fd = 0;
        for(int x = 0; x < m; ++x){
            if ( a * x % m == 1) {
                cout << x << "\n";
                fd = 1;
                break;
            }
        }
        if ( !fd ) cout << -1 << "\n";
    }
    return 0;
}