#include <bits/stdc++.h>
using namespace std;
int ktsnt(int n){
    if(n <=1) return 0;
    for (int i = 2; i*i <= n; i++)
    {
       if(n%i == 0 ) return 0; 
    }
    return 1;
}
int  timuocnt(int n){
    if(n==1) return 1;
    if(ktsnt(n) ==1) return n;
    int kq;
    for (int i = 2; i <= n; i++)
    {
        if(n % i == 0){
            if(ktsnt(i)==1){
                kq = i;
                break;
            }
        }
    }
    return kq;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for (int i = 1; i <=n; i++)
        {
            cout << timuocnt(i) << " ";
        }
       cout << endl; 
    }
    return 0;
}
