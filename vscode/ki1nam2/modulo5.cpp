#include <bits/stdc++.h>
using namespace std;
long long modulo(string a, long long b){
    long long nho=0;
    for(int i =0;i < a.length();i++ ){
        nho = (nho*10 + (a[i]- '0')) % b; 
    }
    return nho;
}
int main(){
    int t; cin >> t;
    while(t--){
        long long  b;
        string a;
        cin.ignore();
        getline(cin,a);
        cin >> b;
        cout << modulo(a,b) <<endl;
    }
    return 0;
}
