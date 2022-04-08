#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;cin.ignore();
    while(t--){
    string s1 ="",s2="";
    cin >> s1>>s2;
    int n =s1.length()+1;
    int m =s2.length()+1;
    int x[n][m];
    for (int  i = 0; i < n; i++)
    {
        x[i][0] =0;
    }
    for (int i = 0; i < m; i++)
    {
        x[0][i] =0;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if(s1.at(i-1) == s2.at(j-1)) x[i][j] =x[i-1][j-1] +1;
            else x[i][j] = max(x[i-1][j],x[i][j-1]);
        }
        
    }
    cout << x[n-1][m-1] << endl;
    
    
}
    return 0;
}
