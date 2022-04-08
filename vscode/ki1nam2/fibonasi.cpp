#include <bits/stdc++.h>
using namespace std;
long fib(int n){
   int f0= 0 ,f1 =1,fn =1;
   if(n == 0 ) return 0;
   if(n ==1)return 1;
   for(int i =2 ; i<n;i++){
       f0 =f1;
       f1 = fn;
       fn = f0 + f1;
   }
   return fn;
}
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        cout << fib(n)%1000000007<< endl;
//        cout << m[n]%1000000007 <<endl;
    }
    return 0;
}
