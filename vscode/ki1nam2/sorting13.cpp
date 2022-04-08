#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> n>> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
        {
            cin >>a[i];
        }
        for (int  i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int c[m+n];
        for (int  i = 0; i < n; i++)
        {
            c[i] = a[i];
        }
        for (int  i = 0; i < m; i++)
        {
            c[i+n] = b[i];
        }
        sort(c,c+m+n);
        for (int i = 0; i < m+n; i++)
        {
            cout << c[i]<< " ";
        }
        cout << endl;
    }
    return 0;
}
