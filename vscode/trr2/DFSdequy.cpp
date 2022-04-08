#include <bits/stdc++.h>
using namespace std;
int n;
int m[30][30];
int used[30];
void DFS(int k)
{
    used[k] =1;
    cout << k+1 << " ";
    for (int i = 0; i < n; i++)
    {
        if(used[i] == 0 && m[k][i] == 1)
        {
            DFS(i);
        }
    }
    
}
int main(){
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
        
    }
    for (int i = 0; i < n+1; i++)
    {
        used[i] =0;
    }
    DFS(0);
    
    return 0;
}
