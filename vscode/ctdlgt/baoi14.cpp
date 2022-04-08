#include <bits/stdc++.h>
using namespace std;
int m[10];
int n;
void khoitao(){
    for (int i = 0; i < n; i++)
    {
        m[i] = 0;
    }
    
}
void xem(){
    for (int i = 0; i < n; i++)
    {
       if(m[i]== 1) cout << "B" ;
       else cout << "A";
    }
    cout << " ";
    
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        khoitao();
        for (int i = 0; i < pow(2,n); i++)
        {
            for (int i = n-1; i >= 0; i--)
            {
                if(m[i] > 1) {m[i] = 0;m[i-1]++;}
            }
            xem();
            m[n-1] ++;
        }
        
    cout << endl;
    }
    return 0;
}
