#include <bits/stdc++.h>
using namespace std;
int m[11];
int used[11];
int n,sum,s,found;
int xd=0;
void xem(){
    xd++;
    cout << "[";
    int so1 =1;
    for (int i = 0; i < n; i++)
    {
        if(used[i] == 1){
            if(so1) cout << m[i] ;
            else cout << " " << m[i];
            so1 =0;
        }
    }
    cout << "] ";
    
}
void thu(int k)
{
    for (int i = 1; i >= 0; i--)
    {
        used[k] =i;
        sum = sum + m[k]*used[k];
        if(k==n-1)
        {
            if(sum == s){
                xem();
            }
        }
        else  thu(k+1);
        sum = sum -m[k]*used[k];
    }
    
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        xd = 0;
        sort(m,m+n);
        thu(0);
        if(xd == 0) cout << -1;
        cout<< endl;
        
    }
    return 0;
}
