#include <bits/stdc++.h>
using namespace std;
long long M =1000000007;
int main(){
    int t; cin >> t;
    while(t--)
    {
        int n,k=3;
        cin >>n;
        long long  m[n+2];
        for (int i = 0; i < n+1; i++)
        {
            m[i] =0;
        }
        m[0] =1;
        m[1] =1;
        for (int i = 2; i < n+1; i++)
        {
            for (int j = 1; j <= min(i,k); j++)
            {
                m[i] += m[i-j];
                m[i] %= M;
            }
            
        }
        cout << m[n]<<endl;
        
    }
    return 0;
}
