#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int m, s; cin >> m >> s;
    if ( m * 9 < s || ( s == 0 && m > 1) ) {
        cout << "-1 -1";
        return 0;
    }
    int sDigits = s;
    vector<int> mi(m, 0), ma(m, 0);
    // MIN
    mi[0] = 1; sDigits--;
    for(auto i = mi.rbegin(); i != mi.rend(); ++i){
        if(sDigits > 9) {
            *i = 9;
            sDigits -= 9;
        }
        else {
            *i += sDigits;
            break;
        }
    }
    for(auto i : mi) cout << i;
    cout << " ";
    // MAX
    sDigits = s;
    for(auto i = ma.begin(); i != ma.end(); ++i){
        if ( sDigits > 9){
            *i = 9;
            sDigits -= 9;
        }
        else {
            *i = sDigits;
            break;
        }
    }
    for(auto i : ma) cout << i;
    return 0;
}