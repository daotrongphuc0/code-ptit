#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int m[n];
        for (int  i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        sort(m,m+n);
        int min1 =m[0];
        int min2 = min1;
        for (int  i = 0; i < n; ++i)
        {
            if(m[i] != min1){
                min2 =m[i];
                break;
            }
               
        }
       if(min1 == min2 ) cout << -1;
       else cout << min1 << " " << min2;
        cout << endl;
    }
    return 0;
}
