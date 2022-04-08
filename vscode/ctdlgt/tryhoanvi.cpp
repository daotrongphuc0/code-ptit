#include <bits/stdc++.h>
using namespace std;
bool used[100];
int a[100];
int n;
void khoitao(){
    for (int i = 0; i < n; i++)
    {
        used[i] =false;
    }
    
}
void xem(){
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << " ";    
}
void thu(int k){
    for (int i = 1; i <= n; i++)
    {
        if(!used[i]){
            a[k] = i;
            used[i] = true ;
            if(k==n) xem();
            else thu(k +1);
            used[i] = false ;    
        }
    }
    
}
int main(){
    cin >> n;
    khoitao();
    thu(1);
    return 0;
}
