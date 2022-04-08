#include <bits/stdc++.h>
using namespace std;
int kt(int n){
    int dem =0;
    if (n <= 1) return 1;
    for (int  i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0) dem ++;
  //      break ;
    }
    if(dem == 0)return 1;
    return 0;
}
int main(){
    int a , b , c ;
   do { cin >> a >> b ;}
      while (a<0 && b<0);
    if(a > b ){
        c = a;
        a=b;
        b=c;
    }
    for (int  i = a+1; i < b; i++)
    {
        if(kt(i)== 1) cout << i<< " ";
    }
    
    return 0;
}
