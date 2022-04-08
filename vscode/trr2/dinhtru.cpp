#include <bits/stdc++.h>
using namespace std;
int n;
int m[30][30];
int used[30];
void DFS(int k)
{
    used[k] =1;
   // cout << k+1 << " ";
    for (int i = 0; i < n; i++)
    {
        if(used[i] == 0 && m[k][i] == 1)
        {
            DFS(i);
        }
    }
    
}
void khoitao(){
for (int i = 0; i < n+1; i++)
    {
        used[i] =0;
    }    
}
int demlienthong(){
    int dem =0;
    for (int i = 0; i < n; i++)
    {
        if(used[i] == 0) {
            dem ++;
            DFS(i);
        }
    }
    return dem ;
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
    khoitao();
    int sotp = demlienthong();
    for (int i = 0; i < n; i++)
    {
        used[i] =1;
        if(demlienthong()>sotp) cout << i<< " ";
        khoitao();
    }
    
    
    return 0;
}
