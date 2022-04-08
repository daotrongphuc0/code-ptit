#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){ 
        long long a,x,y;
        cin >> a >> x >> y;
        long long lap = __gcd(x,y);
        for (int i = 0; i < lap; i++)
        {
            cout  << a;
        }
        cout << endl;
        
    }
    return 0;
}
