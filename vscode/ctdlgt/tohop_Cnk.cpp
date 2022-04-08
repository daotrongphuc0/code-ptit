#include <bits/stdc++.h>
using namespace std;
long long M =1000000007;
long long mu(int n ,int k){
    if( k==0) return 1;
    long long q = mu(n,k/2) % M;
    if(k&1) return (q*q%M)*n %M;
    else return q*q %M ;
}
int main(){
    int t; cin >> t;
    while(t--)
    {
        
        int n,k;
        cin >> n>> k;
        long long m[n+1];
        m[1] =1;m[0]=1;
        for (int  i = 1; i < n+1; i++)
    {
        m[i] =m[i-1] *i %M;
    }
        long long kq = m[k] *m[n-k] %M;
        cout <<  (m[n] * mu(kq,M-2) %M +M)%M << endl;
    }
    return 0;
}
