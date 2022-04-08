#include <bits/stdc++.h>
using namespace std;
int m[16];
int n;
void khoitao(){
    for (int i = 0; i < n; i++)
    {
        m[i] = 0;
    }
    
}
int kt(){
    int dem =0;
    for (int i = 0; i < n; i++)
    {
        if(m[i] == 1) dem ++;
    }
    return dem;
}
void xem(){
    for (int i = 0; i < n; i++)
    {
        cout << m[i];
    }
    cout << endl;
    
}
int main(){
    int t; cin >> t;
    while(t--){
        int k;
        cin >> n>> k;
        khoitao();
        for (int i = 0; i < pow(2,n); i++)
        {
            m[n-1] ++;
            for (int i = n-1; i >= 0; i--)
            {
                if(m[i] > 1) {m[i] = 0;m[i-1]++;}
                }
             if(k == kt()) xem();
            
        }
        

    }
    return 0;
}
