#include <bits/stdc++.h>
using namespace std;
void timuoc(int n){
    if(n == 1) cout <<"1 1";
    for (int i = 2; i < n; i++)
    {  
        int dem = 0;
        while(n%i == 0){
           dem++;
           n /= i;
        }
        if(dem != 0) cout << i << " "<< dem <<" ";
    }
    if(n != 1 ) cout << n <<" 1";
    cout << endl;
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
       while (n<1||n>10000);
       timuoc(n);
    }
    return 0;
}
