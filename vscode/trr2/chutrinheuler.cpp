#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    int k ; cin >> k;
    int m[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
        
    }
    k--;
    stack<int> s;
    int kq[40];
    int dem =0;
    s.push(k);
    while(!s.empty())
    {
        int x =s.top();
        int i;
        bool ok = false;
        for ( i = 0; i < n; i++)
        {
            if(m[x][i] == 1 ){
                ok =true;
                break;
            }
            
        }
        if(ok){
            s.push(i);
            m[x][i] =0;
            m[i][x] =0;
        }
        else {
            s.pop();
            x++;
            kq[dem] =x;
            dem++;
        }       
    }
    for (int j = dem-1; j >= 0; j--)
    {
        cout << kq[j] << " ";
    }
    cout << endl;
    
    return 0;
}
