#include <bits/stdc++.h>
using namespace std;
int snt(int a){
     if(a <=1) return 0;
    for(int i =2;i*i <= a;i++){
       if (a % i== 0) {
           return 0;
           break;
       }
    } 
    return 1;
}
int ucln(int a , int b){
    int i;
   while (b != 0){
      i = a%b;
      a = b;
      b = i;
   }
return a;
}
int  main(){
    int t;
    cin >> t;
 //    cout << snt(t) << endl;
    while(t--){
      int n;
      cin >> n;
      int dem = 0;
      for (int  i = 1; i <= n; i++)
      {
          if(ucln(i,n) == 1) dem ++;
      }
    cout << snt(dem) << endl;
    }
    return 0;
}
