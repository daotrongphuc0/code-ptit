#include <bits/stdc++.h>
using namespace std;
int ktsnt(int n){
    if(n <=1) return 0;
    for (int i = 2; i*i <= n; i++)
    {
       if(n%i == 0 ) return 0; 
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for (int i = 1; i <= n/2; i++)
        {
            if(ktsnt(i) == 1) {
                if(ktsnt(n-i) ==1 ){
                    cout << i << " " << n-i <<endl;
                    break;
                }
            }
        }
        
    }
    return 0;
}
