#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i; j < n; j++)
            {
                if(m[i] > m[j]) {
                    int cmp = m[i];
                    m[i] = m[j];
                    m[j] = cmp;
                }
            }
            
        }
        cout << m[x];
        // int dem =1;
        // for (int i = 0; i < n-1; i++)
        // {
        //   if(dem == x) {
        //       cout << m[i];
        //       break;
        //   }
        //   if(m[i]>m[i-1]) dem++;
        // }
        // if((m[n-1] > m[n-2]) && (dem == x)) cout << m[n-1];
      cout << endl;  
    }
    return 0;
}
