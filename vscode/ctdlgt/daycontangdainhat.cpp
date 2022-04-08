#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int m[n+2];
    for (int  i = 1; i < n+1; i++)
    {
        cin >> m[i];
    }
    m[0] =0;
    m[n+1] = 1001;
    int l[n+2],t[n+2];
    l[n+1] = 1;
    for (int i = n; i >= 0; i--)
    {
        int jmax=n+1;
        for (int j = i+1; j < n+1; j++)
        {
            if(m[i] < m[j] && l[j]>l[jmax]) jmax = j;
        }
        l[i] =l[jmax] +1;
        t[i] =jmax;

        
    }
    int max = l[1];
    for (int i = 1; i < n+1; i++)
    {
       // cout << l[i]<<" ";
        if(l[i]> max) max = l[i];
    }
   // cout << m[1]<<" ";
    cout <<  max-1;
    
    
    return 0;
}
