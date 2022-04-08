#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
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
        int dem =1;
        int kt = dem;
        int j;
        for (int  i = 0; i < n; i++)
        {
            for (  j = 0; j < n; j++)
            {
                if(dem == m[j]){ 
                    dem++;
                    break;
                }
            }
            if(kt == dem )break;
            kt = dem;
        }
       cout<< dem << endl; 
    }
    return 0;
}
