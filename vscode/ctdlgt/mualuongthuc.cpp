#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--)
    {
        int n,s,m;
        int sum =0,kq =0;
        bool ok =false ;
        cin >> n>>s>> m;
        if(n >= m){
            int  luongthuccan = s*m;
            for (int i = 1; i <= s; i++)
            {
                if(i%7 != 0) {sum += n; kq++;}
                if(sum >= luongthuccan) {
                    ok =true ;
                    break;
                }
            }
            
        } 
        if(ok) cout << kq << endl;
        else cout << -1<<endl;
    }
    return 0;
}
