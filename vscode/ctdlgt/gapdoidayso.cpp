#include <bits/stdc++.h>
using namespace std;
int kq;
long long mu(int n){
    if(n==0) return 1;
    if(n==1)return 2;
    long long q = mu(n/2);
    if(n&1) return q*q*2;
    else return q*q;
}
void chia(int n,long long k)
{
    long long ts = mu(n-1);
    if(k== ts) {  kq = n;return ;}
    else
    {
        if(k>ts) chia(n-1,k-ts);
        else chia(n-1,k);
    }
}
int main(){
    int t; cin >> t;
    while(t--)
    {
        kq=0;
        int n;
        long long k;
        cin >> n>>k;
        chia(n,k);
        cout << kq << endl;
    }
    return 0;
}
