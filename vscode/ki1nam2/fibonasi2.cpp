#include <bits/stdc++.h>
using namespace std;
string fibonasi(long long a){
    if(a ==1 || a ==0) return "YES";
   // int xet =0,dem =3;
    long long a1=1,a2=1, nho;
    while(1){
         nho = a1 +a2;
         if(nho == a) return "YES";
         if(nho > a) return "NO";
         if(nho < a) {
             a1 = a2 ;
             a2 = nho;
         }

    }
}
int main(){
    int t;cin >> t ;
    while(t--){
        long long n;
        cin >> n;
        cout << fibonasi(n) << endl;
    }
    return 0;
}
