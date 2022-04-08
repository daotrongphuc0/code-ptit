#include <bits/stdc++.h>
using namespace std;
long long M =1000000007;
long long sq(long long x){
    return x*x % M;
}
long long mu(long long n,long long k)
{
    if(k == 0) return 1;
    long long q = mu(n,k/2) %M;
    if(k&1) return sq(q)*n %M;
    else return sq(q);
}
int main(){
    int t; cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long dao =0;
        long long a =n;
        while(n>0)
        {
            int x = n%10;
            dao = dao*10 +x;
            n/=10;
        }
        cout << mu(a,dao)<< endl;
    }
    return 0;
}
