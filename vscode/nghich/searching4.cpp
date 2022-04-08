#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ,k;
        cin >> n >> k;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        int dem = -1;
        for (int  i = 0; i < n; i++)
        {
            if(m[i] == k){
                  dem = i+1;
                  break;
            }
        }
        cout << dem <<endl;
        
    }
    return 0;
}
