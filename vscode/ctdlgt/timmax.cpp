#include <bits/stdc++.h>
using namespace std;
long long M =1000000007;
int main(){
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        sort(m,m+n);
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            sum = (sum+m[i]*i) % M;
        }
        cout << sum<< endl;
        
    }
    return 0;
}
