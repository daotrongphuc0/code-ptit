#include <bits/stdc++.h>
using namespace std;
#define M 1000000007;
int main(){
    int  t;cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n>>k;
        if(k>n) cout << 0<<endl;
        if(k<n) 
        {
            long long kq =n;
            for (int  i = n-1;i>= n-k+1; i--)
            {
                kq = kq*i%M;
            }
            cout << kq  << endl;
        }
    }
    return 0;
}
