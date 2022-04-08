#include <bits/stdc++.h>
using namespace std;
int m[30][30];
int n;
int used[30];
void BFS(int k)
{
    queue<int> s;
    s.push(k);
    used[k] = 1;
    while(!s.empty())
    {
        int x = s.front();
        cout << x+1 << " ";
        s.pop();
        for (int i = 0; i < n; i++)
        {
            if(used[i] == 0 && m[x][i] == 1) 
            {
                s.push(i);
                used[i] = 1;
            }
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
    for (int i = 0; i < n; i++)
    {
        used[i] =0;
    }
    BFS(0);
    
    return 0;
}
