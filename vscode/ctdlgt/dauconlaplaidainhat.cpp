#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int  n; string s;
        cin >> n>>s;
        int l[n+3][n+3];
        for (int i = 0; i < n+1; i++)
        {
            l[0][i] =0;
            l[i][0] =0;
        }
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 1; j < n+1; j++)
            {
                if(s[i-1] ==s[j-1] && i!=j)
                    l[i][j] = l[i-1][j-1]+1;
                else l[i][j] =max(l[i-1][j],l[i][j-1]);
            }
            
        }
        cout << l[n][n]<<endl;
        
        
    }
    return 0;
}
