#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int tong =0;
        while(n > 9 ){
            while(n/10 != 0){
                tong += n%10;
                n /= 10;
            }
            tong += n;
            n = tong ;
            tong =0;
        }
        cout << n << endl;
    }
    return 0;
}
