#include <bits/stdc++.h>
using namespace std;
int m[11][11] ;
int n,k;
int ts[11];
int used[11];
int gt[1025][11];
int dem = 0;
void xem 
void khoitao()
{
    for (int i = 0; i < 11; i++)
    {
        used[i] = 0;
    }
    ts[0]= 0;
}
void backtrack(int x)
{
    for (int i = 0; i < n; i++)
    {
        if(!used[i])
        {
            ts[i+1] = ts[i] + m[i][x];
            used[i] = 1;
            gt[i] = m[i][x];

        }
        
    }
    

}
int main(){
    int n,k;
    cin >> n>> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
        
    }
    
    return 0;
}
