#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int n; cin >>n;
        int m[n+3];
        for (int i = 0; i < n; i++)
        {
            cin >>m[i];
        }
        int  min1=m[0],min2 =INT_MAX;
        bool ok =false ;
        for (int i = 1; i < n; i++)
        {
            if(m[i]<min1) {min2=min1;min1= m[i];ok =true;}
            else if(m[i]<min2 && m[i]>min1) {min2=m[i];ok =true;}
        }
        if(ok) cout << min1<<" "<<min2<<endl;
        else cout << -1<< endl;
        
    }
    return 0;
}
