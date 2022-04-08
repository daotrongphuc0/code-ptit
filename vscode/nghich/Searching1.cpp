#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n ,k;
        cin >> n >> k;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        int dem = 0;
        for (int  i = 0; i < n; i++)
        {
            if(m[i] == k){
                 dem = i+1;
                 break;
        }
        }
        if(dem == 0) cout << -1;
          else cout << dem;
        cout << endl;
    }
    return 0;
}
