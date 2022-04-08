#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
int main(){
  //  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    int k,n;
    cin >> k >> n;
    int m[k][n];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j]; 
        }
        
    }
    int dem =0;
    int s[k*n];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s[dem] = m[i][j];
            dem ++;
        }
        
    }
    for (int  i = 0; i < n*k-1; i++)
    {
        for (int j = i; j < n*k; j++)
        {
            if( s[i]>s[j]) swap(s[i],s[j]);
        }
        
    }
    for (int i = 0; i < n*k; i++)
    {
        cout << s[i]<< " ";
    }
    }
    return 0;
}
    
    