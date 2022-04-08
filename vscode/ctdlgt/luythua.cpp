#include <bits/stdc++.h>
using namespace std;
long long M = 1000000007;
long long mu(long long n,long long k)
{
    if(k==0) return 1;
    long long q = mu(n,k/2) %M;
    if(k&1) return (n*((q*q) % M)) %M;
    else return  (q*q) %M;
}
int main(){
    int t; cin >>t;
    while(t--)
    {
        long long n,k;
        cin >> n>> k;
        cout << mu(n,k) %M<<endl;
    }
    return 0;
}
