#include <bits/stdc++.h>
using namespace std;
int n,m,s[101][101];
int dem =0;
void khoitao(){
    dem =0;
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            s[i][j] =0;
        }
        
    }
}
void Try(int i,int j)
{
    if(i== n-1 && j==m-1) dem++;
    if(i+1 <n ) Try(i+1,j);
    if(j+1 <m) Try(i,j+1);
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n>> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> s[i][j];
            }
        }
        dem =0;
        Try(0,0);    
        cout << dem << endl;
        
    }
    return 0;
}
