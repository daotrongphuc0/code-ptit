#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--)
    {
        int m,n;
        cin >>n>>m;
        long long mang[n+2][m+2];
        for (int i = 0; i < n+1; i++)
        {
            mang[i][0] = 1;
        }
        for (int i = 0; i < m+1; i++)
        {
            mang[0][i] = 1;
        }
        for (int  i = 1; i < n+1; i++)
        {
            for (int j = 1; j < m+1; j++)
            {
                mang[i][j] = mang[i-1][j] +mang[i][j-1];
            }
            
        }
        mang[0][0] =0;
        cout << mang[n][m]<<endl;
    }
    return 0;
}
