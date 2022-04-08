#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t-- ){
        int tong =0;
        int n;
        long k;
        cin >>n>>k;
        for (int  i = 1; i <= n; i++)
        {
            tong += i%k;
        }
        if(tong == k) cout<< 1<<endl;
        else cout << 0 << endl;
    }
    return 0;
}
