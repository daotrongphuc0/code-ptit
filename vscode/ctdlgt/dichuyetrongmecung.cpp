#include <bits/stdc++.h>
using namespace std;
int n;
int m[11][11];
char kq[20];
bool ok;
void xem()
{
    ok=true;
    for (int i = 0; i < 2*(n-1); i++)
    {
        cout << kq[i];
    }
    cout << " ";
}
void dequy(int x,int y,int dem)
{
    if(x ==n-1 && y==n-1) xem();
    if(x<n-1 && m[x+1][y] ==1) { kq[dem] = 'D';dequy(x+1,y,dem+1);}
    if(y<n-1 && m[x][y+1] ==1) { kq[dem] = 'R';dequy(x,y+1,dem+1);}
    
}
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        ok =false;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
            
        }
        if(m[0][0]==1) dequy(0,0,0);
        if(!ok) cout << -1;
        cout <<endl;
        
    }
    return 0;
}
