#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int m[n],m1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];m1[i]=m[i];
        }
        sort(m1,m1+n);
        bool ok =true;
        for (int i = 0; i <n; i++)
        {
            if(m1[i] == m[i] || m1[i] == m[n-i-1]) ok =true;
            else{ok=false ;break;}
        }
        if(ok) cout << "Yes"<<endl;
        else cout << "No"<< endl;
        
    }
    return 0;
}