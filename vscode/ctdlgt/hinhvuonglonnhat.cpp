#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--)
    {
        int n,m;
        cin >>n>>m;
        int A[n+2][m+2];
        for (int i = 0; i < n+1; i++)
        {
            A[i][0] =0;
        }
        for (int i = 0; i < m+1; i++)
        {
            A[0][i] =0;
        }
        
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 1; j < m+1; j++)
            {
                cin >> A[i][j];
            }
            
        }
        int max =0;
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 1; j < m+1; j++)
            {
                if(A[i][j] ==1 && A[i-1][j-1] != 0 && A[i][j-1] != 0&& A[i-1][j]!= 0)
                A[i][j] =min(A[i][j-1],min(A[i-1][j-1],A[i-1][j])) +1;
                if(A[i][j]> max) max =A[i][j];
            }
            
        }
        cout << max <<endl;
    }
    return 0;
}
