#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int m[n];
        int used[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];used[i] =0;
        }
        sort(m,m+n);
        int res =n;
        for (int i = n/2-1, j =n-1;i>=0 && j>=n/2;)
        {
            if(m[j] >= 2*m[i])
            {
                res--;
                i--;j--;
            }
            else i--;
        }
        cout <<res <<endl;



        
    }
    return 0;
}
