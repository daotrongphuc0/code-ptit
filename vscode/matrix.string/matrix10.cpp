#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int m1[n][m];
        int m2[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> m1[i][j] ;
                m2[i][j] =0;
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(m1[i][j] == 1){
                    for (int x = 0; x < n; x++)
                    {
                        m2[x][j] =1;
                    }
                    for (int y = 0; y < m; y++)
                    {
                        m2[i][y] =1;
                    }
                    
                    
                }
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << m2[i][j]<< " ";

            }
            cout <<  endl;
        }
        
        
        
    }
    return 0;
}
