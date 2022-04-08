#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n>> m;
        int m1[n+3],m2[n+5];
        for (int i = 0; i < n; i++)
        {
            cin >> m1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> m2[i];
        }
        int i=0,j=0;
        bool ok =true;
        int kq[max(m,n)];
        int dem=0;
        while(ok)
        {
            if(m1[i]<m2[j]) {cout << m1[i]<< " ";i++;}
            else
            {
                if(m1[i]>m2[j]){cout << m2[j]<<" ";j++;}
                else {
                    kq[dem] =m1[i];dem++;
                    cout << m1[i]<<" ";i++;j++;
                }

            }
            if(i==n||j==m) ok =false;
        }
        if(i<n ) 
        {
            for (int  x = i; x < n; x++)
            {
                cout << m1[x]<<" ";
            }
            
        }
        if(j<m)
        {
            for (int x = j; x < m; x++)
            {
                cout <<m2[x]<<" ";
            }
            
        }
        cout <<endl;
        for (int x = 0; x < dem; x++)
        {
            cout <<kq[x] <<" ";
        }
        if(dem != 0) cout <<endl;

    }
    return 0;
}
