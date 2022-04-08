#include <bits/stdc++.h>
using namespace std;
long long M =1000000007;
int main(){
    int t; cin >> t;
    while(t--)
    {
        int  n;cin >> n;
        long long m[n+5];
        m[0] =1;
        for (int i = 3; i < n+1; i++)
        {
            m[i] =0;
            for (int j = 0; j < i; j++)
            {
                m[i] += m[j] * m[i-j-1];
            }
            
        }
        m[0] =0;
        cout << m[n]<<endl;
    }
    return 0;
}
