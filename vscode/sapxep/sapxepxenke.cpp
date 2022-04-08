#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int m[n+2];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        sort(m,m+n);
        for (int i = 0; i < n/2; i++)
        {
            cout << m[n-i-1] << " ";
            cout << m[i]<<" ";
        }
        int k =n/2;
        if(n&1) cout << m[k] << endl;
        else cout << endl;
        
        
    }
    return 0;
}
