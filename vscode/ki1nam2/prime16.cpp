#include <bits/stdc++.h>
using namespace std;
int kt(long long n){
    if(n <= 1) return 0;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i ==0 ) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int dem =0;
        for(int i =0 ; i*i <= n ;i++){
            if(kt(i) == 1) dem ++;
        }
        cout << dem << endl;
    }
    return 0;
}
