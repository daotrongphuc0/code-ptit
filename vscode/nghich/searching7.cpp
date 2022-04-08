#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        sort(m,m+n);
        int dem =1;
        int kt = INT_MAX;
        //if(k >= 1 )cout << m[n-1] << " ";
        for (int i =n-1; i >= 0; i--)
        {
            
            if(m[i] < kt){
                cout << m[i] <<" ";
                dem ++;
                kt = m[i];
            }
            if(dem == k) break;
        }
        
    }
    return 0;
}
