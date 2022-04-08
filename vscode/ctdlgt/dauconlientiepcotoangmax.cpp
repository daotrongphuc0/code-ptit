#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int m[n];
        for (int  i = 0; i < n; i++)
        {
            cin >>m[i] ;
        }
        int kta=0,ktd =0;
        int ammax = -101;
        int s=0,stmp =0;

        for (int i = 0; i < n; i++)
        {
            stmp += m[i];
            if(stmp <  0) stmp =0;
            else s = max(s,stmp);
            if(m[i] >= 0) {
                ktd =1;
            }
            else {
                kta =1;
                ammax = max(ammax,m[i]);
            } 
        }
        if(ktd == 0) cout << ammax;
        else{
            cout << s;
        }
        cout << endl;
        
    }
    return 0;
}
