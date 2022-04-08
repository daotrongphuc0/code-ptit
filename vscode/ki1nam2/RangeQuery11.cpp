#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int m[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    sort(m,m+n);
    int hieu = m[1]-m[0];
    for (int  i = 1; i < n; i++)
    {
       if(m[i]- m[i-1]< hieu ) hieu = m[i]- m[i-1];
        
    }
    cout << hieu << endl;
    
    }
    return 0;
}
