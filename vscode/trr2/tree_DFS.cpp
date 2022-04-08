#include <bits/stdc++.h>
using namespace std;
int kq[50][2];
bool chuaxet[50];
int dem =0,n,m[50][50];
void khoitao()
{
    for (int i = 0; i < n; i++)
    {
        chuaxet[i] =true;
    }
    
}
void xem(int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << kq[i][0] +1<< " "<< kq[i][1]+1<<endl;
    }
    
}
void tree_DFS(int u)
{
    chuaxet[u] =false;
    for (int i = 0; i < n; i++)
    {
        if(chuaxet[i] && m[u][i]==1) {
            kq[dem][0] =u;
            kq[dem][1] =i;
            dem++;
            tree_DFS(i);
        }
    }
    
}
void tree_graph_DFS(int root)
{
    khoitao();
    dem=0;
    tree_DFS(root);
    if(dem < n-1) cout << "do thi khong lien thong" <<endl;
    else xem(dem);
}
void tree_BFS(int root)
{
    khoitao();
    dem=0;
    queue<int> s;
    chuaxet[root] =false;
    s.push(root);
    while(!s.empty())
    {
        int x = s.front();
        s.pop();
        for (int i = 0; i < n; i++)
        {
            if(m[x][i] ==1 && chuaxet[i])
            {
                s.push(i);
                kq[dem][0] =x;
                kq[dem][1] =i;
                dem++;
                chuaxet[i] =false;
            }
        }
        
    }
    if(dem<n-1) cout << "do thi khong lien thong"<<endl;
    else 
       xem(dem);
}
int main(){
    int k;
    cin >> n>> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
        
    }
    cout << "DFS tree"<< endl;
    tree_graph_DFS(k-1);
    cout << "BFS tree"<<endl;
    tree_BFS(k-1);
    return 0;
}
