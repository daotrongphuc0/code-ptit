#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int used[n+1],t[n+1];
    int c[n+1][n+1];
    int xi;
    for (int i = 1; i <= n; i++)
    {
        used[i] =0;t[i]=0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
        }
        
    }
    t[1] =1;
    used[1] = 1;
    int i =1;
    while(i<= n)
    {
        i++;
        int b = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if(used[j] == 0 && c[t[i-1]][j]< b && c[t[i-1]][j]> 0)
            {
                b = c[t[i-1]][j];
                xi= j;
            }
        }
        t[i] = xi;
        used[xi] = 1;
        
    }
    for (int  i = 1; i <= n; i++)
    {
        cout << t[i] << " ";
    }
    return 0;
}
