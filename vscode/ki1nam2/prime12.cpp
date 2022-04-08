#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
       int dem =0;
       int gt = -1;
       int n ,k;
       cin >> n >> k;
       for (int i = 2; i < n; i++)
       {
          while(n%i == 0){
              dem ++;
              if(dem == k){gt =i; break;}
              n /=i;
          }
          if(dem == k ) break;
       }
       if(n > 1 ) { 
           dem ++;
           if(dem == k ) gt =n;
        }
       cout<<gt<<endl;
    }
    return 0;
}
