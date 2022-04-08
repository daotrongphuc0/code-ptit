#include <bits/stdc++.h>
using namespace std;
void xoaphantu(int a[],int x,int &y){
   // if(x >= y-1) return ;
    for (int i = x; i < y-1; i++)
    {
        a[i] = a[i+1];
    }
    y--;
}
int kt(int n,int b[],int x){
    for (int i = 0; i < x; i++)
    {
        if(n == b[i]) return 1;
    }
    return 0;
}
int main(){
    int t; cin >> t;
    while(t--){
        int m ,n;
        cin >> n >> m;
        int a1[n];
        int a2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a2[i];
        }
        
        
        //int k  =n;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(a1[i] == a1[j]) {
                    xoaphantu(a1,j,n);
                  //  i--;
                }
            }
            
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a1[i] << " ";
        // }
        // cout <<endl;
        for (int i = 0; i < n; i++)
        {
            if(kt(a1[i],a2,m) == 1){
                cout << a1[i] << " " << a1[i] << " ";
                xoaphantu(a1,i,n);i--;
            }
        }
        sort(a1,a1+n);
        for (int i = 0; i < n; i++)
        {
            cout << a1[i] << " " ;
        }
        cout << endl;
        
        
        
    }
    return 0;
}
