#include <bits/stdc++.h>
using namespace std;
void sinh( int a[],int n){
    a[n-1]++;
    for (int  i = n-1; i >= 0; i--)
    {
        if(a[i] >1) {
            a[i-1]++;
            a[i] = 0;
        }
    }
    
}
void xuat(int a[],int n){
    for (int  i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << " ";
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n ;
        cin >> n;
        int  *m = new int[n];
        for (int  i = 0; i < n; i++)
        {
            m[i] =0;
        }
        for (int  i = 0; i < pow(2,n); i++)
        {
            xuat(m,n);
            sinh(m,n);
        }
        
        cout << endl;
    }
    return 0;
}
