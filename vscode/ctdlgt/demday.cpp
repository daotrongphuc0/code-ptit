#include <bits/stdc++.h>
using namespace std;
long long M = 123456789;
long long sq(long long x){
    return x*x % M;
}
long long mu(long long k){
    if(k ==0 ) return 1;
    long long q = mu(k/2);
    if(k&1) return sq(q)*2 %M;
    else return sq(q);
}
int main(){
    int t; cin >>t;
    while(t--)
    {
        long long  n; cin >> n;
        cout << mu(n-1)<<endl;

    }
    return 0;
}
