#include <bits/stdc++.h>
using namespace std;

int main(){
//   ios_base::sync_with_stdio(0);

    int T ;
    cin>> T;
    while(T--){
        int a , m;
        cin >> a>> m;
        bool kt =0;
        for (int  i = 0; i < m; i++)
        {
           if (i*a%m == 1){
               cout<< i<< endl;
               kt = 1;
               break;
           }
        }
        if( !kt) cout << -1 <<endl;
       
    }  
    return 0;
}
