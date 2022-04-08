#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        sort(m,m+n);
        for (int  i = 0; i < n; i++)
        {
            cout << m[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
