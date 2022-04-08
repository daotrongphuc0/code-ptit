#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n>> k;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        if(k>n-k) k =n-k;
        sort(m,m+n);
        int sum1=0,sum2=0;
        for (int i = 0; i < k; i++)
        {
            sum1 += m[i];
        }
        for (int i = k; i < n; i++)
        {
            sum2 += m[i];
        }
        cout << sum2-sum1<< endl;
        
    }
    return 0;
}
