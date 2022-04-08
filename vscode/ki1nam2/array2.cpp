#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    long long m[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    long long s[n];
    for (int  i = 0; i < n; i++)
    {
        s[i] = 0;
    }
    int dem =0;
    for (int i = 0; i < n; i++)
    {
        if(m[i] != 0){
            s[dem] = m[i];
            dem ++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    }    
    return 0;
}
