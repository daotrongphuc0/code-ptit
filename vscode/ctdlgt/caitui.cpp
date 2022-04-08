#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--)
    {
        int n,v;
        cin >>n>>v;
        int tl[n+3],gt[n+3];
        for (int i = 1; i < n+1; i++)
        {
            cin >> tl[i];
        }
        for (int i = 1; i < n+1; i++)
        {
            cin >> gt[i];
        }
        int l[n+3][v+3];
        for (int i = 0; i < n+1; i++)
        {
            for (int j = 0; j < v+1; j++)
            {
                l[i][j]=0;
            }
            
        }
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 1; j < v+1; j++)
            {
                if(tl[i]<=j) l[i][j]=max(l[i-1][j-tl[i]]+gt[i],l[i-1][j]);
                else l[i][j] =l[i-1][j];
            }
            
        }
        cout << l[n][v]<<endl;
        // for (int i = 0; i < n+1; i++)
        // {
        //     for (int j = 0; j < v+1; j++)
        //     {
        //         cout << l[i][j]<<" ";
        //     }
        //     cout <<endl;
        // }
        
        
    }
    return 0;
}
