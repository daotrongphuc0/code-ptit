#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        long long *m = new long long[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        for (int  i = 0; i < n; i++)
        {
            int kt = 0;
             for (int j = 0; j < n; j++){
              if(m[j]==i){
                   cout << i<< " " ;
                    kt =1 ;
                   break;         
              }}
              if (kt ==  0) cout << -1 << " ";
        }       
         cout << endl ;
    }   
    return 0;
}
