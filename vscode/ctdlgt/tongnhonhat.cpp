#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin  >> m[i];
        }
        sort(m,m+n);
        long long a=0,b=0;
        int dem =0;
        for (int i = 0; i < n/2; i++)
        {
            a = a*10 +m[dem];
            dem++;
            b = b*10 +m[dem];
            dem ++;
        }
        if(n&1) a = a*10 +m[n-1];
        cout << a+b<< endl;
        
    }
    return 0;
}
