#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int j;
       int n,s; cin >> n>>s;
       int l[s+5];
       int m[n+5];
       for (int i = 1; i <= n; i++)
       {
           cin >> m[i];
       }
       for (int i = 0; i <=s+1; i++)
       {
           l[i] =0;
       }
       l[0] =1;//l[] =0;
      // l[m[1]] =1;
       for (int i = 0; i <= n; i++)
       {
           for (j = s; j >= m[i]; j--)
           {
               if(l[j] == 0 && l[j - m[i]]  == 1) l[j] =1;
           }
           
       }
    //    for (int i = 1; i <=n; i++)
    //    {
    //         cout << l[t] << " ";
    //    }
       if(l[s] ==1) cout << "YES"<<endl;
       else cout << "NO"<<endl;
        
    }
    return 0;
}
