#include <bits/stdc++.h>
using namespace std;
int n;
int  m[30][30];
int used[30];
int kq[30];
void DFS(int k)
{
    stack<int> s;
    s.push(k);
    used[k]=1;
    while(!s.empty())
    {
        int x = s.top();
        s.pop();
        for (int i =1;i<=n;i++)
        {
            if(m[x][i] == 1 && used[i] == 0)
            {
                used[i] = 1;
                s.push(x);
                s.push(i);
                kq[i] =x;
                break;
            }
        }
        
    }

}
void khoitao(){
    for (int i = 0; i < n; i++)
    {
        used[i] = 0;kq[i]=0;
    }
}
int main(){
    cin >> n;
    int nguon ,dich;
    cin >> nguon >> dich;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> m[i][j];
        }
        
    }
    khoitao();
    DFS(nguon);
    if(kq[dich] != 0) {
        cout << "DFS path: ";
        cout << dich<< " ";
        int u =kq[dich];
        while(u!= nguon ){
            cout << u<<" ";
            u =kq[u];
        }
        cout << nguon;
        cout << endl;
    }
    else cout << "no path"<<endl;
    return 0;
}
