#include <bits/stdc++.h>
using namespace std;
int n;
int  m[30][30];
int used[30];
int kq[30];
int dem =0;
void DFS(int k)
{
    stack<int> s;
    s.push(k);
    // cout << k+1 << " ";
    // used[k] = 1;
    while(!s.empty())
    {
        int x = s.top();
        s.pop();
        if(!used[x]) {kq[dem]=x+1;dem++;}
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
void BFS(int k)
{
    queue<int> s;
    s.push(k);
    used[k] = 1;
    while(!s.empty())
    {
        int x = s.front();
        kq[dem]=x+1;dem++;
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
void khoitao(){
    dem=0;
    for (int i = 0; i < n; i++)
    {
        used[i] = 0;kq[i]=0;
    }
}
int main(){
    cin >> n;
    int nguon ,dich;
    cin >> nguon >> dich;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
        
    }
    khoitao();
    DFS(nguon-1);
    int kt=-1;
    for (int i = 0; i < dem; i++)
    {
        if(kq[i]==dich) kt=i;
    }
    if(kt==-1) cout << "no path";
    else {
        cout <<"DFS path: ";
            for (int  j = kt; j >=0; j--)
            {
                cout << kq[j]<<" ";
            }
    }
    cout << endl;
    khoitao();
    BFS(nguon-1);
    int kt1=-1;
    for (int i = 0; i < dem; i++)
    {
        if(kq[i]==dich) kt1=i;
    }
    if(kt1==-1) cout << "no path";
    else {
        cout <<"DFS path: ";
            for (int  j = kt1; j >=0; j--)
            {
                cout << kq[j]<<" ";
            }
    }
    return 0;
}
