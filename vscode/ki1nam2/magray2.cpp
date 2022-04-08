#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string ss;
        getline(cin ,ss);
        int n = ss.length();
        int tong =0,dem =0;
        for (int i = n-1; i >= 0; i--)
        {
            if(ss[i] == '1') tong += pow(2,dem);
            dem++;
        }
        
        int k =1;
        for (int i = 1; i <= n; i++)
        {
            k*=2;
        }
        string s[k+1];
        s[1] = "0";
        s[2] = "1";
        if(n > 1) {
            int t =2;
            for (int i = 2; i <= n; i++)
            {
               int l =1 ;
               for (int j = 1; j <= i; j++)
               {
                   l *= 2;
               }
               for (int j = 1; j <= t; j++)
               {
                   s[l-j+1] = "1" + s[j];
                   s[j] = "0" + s[j];
               }
               t = l;
            }

        }
        cout << s[tong+1] << endl;
    }
    return 0;
}
