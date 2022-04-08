#include <bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b) {return a / __gcd(a, b) * b;}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x,y,z,n;
        cin >> x>> y>> z >> n;
        long long kq1 = lcm(lcm(x, y), z);
        long long res = (long long) pow(10,n-1) ;
        long long r = res %kq1;
        if(r!= 0) res = res -r + kq1;
        if((log10(res)+1 == n ) cout <<res << endl;
        else cout << -1 <<endl;
    }
    return 0;
}
