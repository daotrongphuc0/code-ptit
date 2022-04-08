#include <bits/stdc++.h>
using namespace std;
int n;
int  m[30][30];
int used[30];
void DFS(int k)
{
    stack<int> s;
    s.push(k);
    cout << k+1 << " ";
    used[k] = 1;
    while(!s.empty())
    {
        int x = s.top();
        s.pop();
        if(!used[x]) cout << x+1  << " ";
        used[x] = 1;
        for (int i =n-1; i>=0; i--)
        {
            if(m[x][i] == 1 && used[i] == 0)
            {
                s.push(i);
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
        used[i] = 0;
    }
    DFS(0);

    
    return 0;
}
