#include <bits/stdc++.h>
using namespace std;
int m[12][12];
int n;
void quaylui(int k)
{
    if(n==0) return ;
    for (int i = 0; i < n-k; i++)
    {
        m[k][i] = m[k-1][i] +m[k-1][i+1];
    }
    if(k < n-1 ) quaylui(k+1);
    
    
}
int main(){
    int t; cin >> t;
    while(t--){
        int n ;cin >> n;
        for(int i = 0;i< n;i++){
            cin >> m[0][i];
        }
        
        quaylui(1);
        int x = n-1;
        for (int i = n-1; i >=0; i--)
        {
            cout << "[";
            for (int j = 0; j < n-i; j++)
            {
                if(j == n-i-1) cout << m[i][j];
                else cout << m[i][j] << " ";
            }
            cout << "] ";
        }
    cout << endl;    

    }
    return 0;
}
