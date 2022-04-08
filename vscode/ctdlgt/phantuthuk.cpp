#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a,b,k;
        cin >> a>> b>> k;
        int m[a+b];
        for (int  i = 0; i < a; i++)
        {
            cin >> m[i];
        }
        for (int i = a; i < a+b; i++)
        {
            cin >> m[i];
        }
        sort(m,m+a+b);
        cout << m[k-1]<<endl;
        
    }
    return 0;
}
