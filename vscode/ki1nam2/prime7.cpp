#include <bits/stdc++.h>
using namespace std;
int kt(int n){
    if(n <=2) return 0;
    int dem =0;
    for (int i = 2; i*i <= n; i++)
    {   
      if(n % i== 0){ dem++;
       n /= i;
      if(n % i == 0) return 0;
      }
    }
    if(n != 1) dem ++;
    return dem == 3;
    
}
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        cout << kt(n) << endl;
    }
    return 0;
}
