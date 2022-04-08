#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long a,b;
        int k;
        cin >> k>>a>>b;
        a= a+b;
        long long kq =0;
        int nho =0;
        int dem =0;
        while(a>0){
            int donvi =a%10;
            if(donvi + nho  >=k){
                kq = kq + ((donvi + nho) %k)*pow(10,dem);
                dem++;
                int tmp =nho;
                nho = (donvi + nho)/k;
                donvi = (donvi + tmp) %k;
            }
            else {
                kq = kq + (donvi + nho)*pow(10,dem);
                dem ++;

            }
            a/=10;
        }
        if(nho != 0) kq =kq  + nho*pow(10,dem);
        cout << kq<< endl;
    }
    return 0;
}
