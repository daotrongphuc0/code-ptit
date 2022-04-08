#include <bits/stdc++.h>
using namespace std;
int fibonasi(int  a){
    if(a ==1 || a ==0) return 1;
    long long a1=1,a2=1, nho;
    while(1){
         nho = a1 +a2;
         if(nho == a) return 1;
         if(nho > a) return 0;
         if(nho < a) {
             a1 = a2 ;
             a2 = nho;
         }
    }
}
int main(){
    int t; cin >> t ;
    while(t--){
        int n ;
        cin >> n;
        int a[n];
        for(int i = 0 ; i< n;++i){
            cin >> a[i];
        }
        for(int i =0; i < n ; ++i){
           if(fibonasi(a[i]) == 1) cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
