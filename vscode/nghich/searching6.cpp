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
        for (int i = 0; i < n; i++)
        {
            cin >> m[n];
        }
        int min = INT_MAX ;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i+1; j < n; ++j)
            {
                if(abs(min) >= abs(m[i] + m[j])) min = m[i] + m[j]; 
            }
            
        }
        cout << min << endl;
    }
    return 0;
}
