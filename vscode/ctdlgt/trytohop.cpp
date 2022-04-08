#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
void khoitao(){
    a[0] =0;
    
}
void xem(){
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << " ";
}
void thu(int i){
        for (int j = a[i-1] + 1; j <= n-k+i; j++)
        {
            a[i] = j;
            if(i==k) xem();
            else thu(i+1);
        }
        
}
int main(){
    cin >> k >> n;
    khoitao();
    thu(1);
    return 0;
}
