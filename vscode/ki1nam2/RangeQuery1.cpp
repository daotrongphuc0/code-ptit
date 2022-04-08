#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>  t;
    while(t--){
       int n,q;
       cin >> n >> q; 
       int m[n];
       for (int i = 0; i < n; i++)
       {
           cin >> m[i];
       }
       for (int  i = 0; i < q; i++)
       {
           int a,b;
           cin >> a >> b;
           int tong =0;
           for (int  j = a-1; j < b; j++)
           {
               tong += m[j];
           }
           cout << tong << endl;
       }
       
    }
    return 0;
}
