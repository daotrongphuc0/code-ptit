#include <bits/stdc++.h>
using namespace std;
int kt(int n){
    int dem =0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0) dem ++;
    }
    if(dem == 0) return 1;
    else return 0;
}
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n ;
      do {
            cin >> n;
           } 
       while (n<2||n>10000);
        for (int j = 2; j <= n; j++)
        {
            if(kt(j)==1) cout << j<< " ";
        }
        cout<< endl;
    }
    
    return 0;
}
