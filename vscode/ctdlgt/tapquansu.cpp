#include <bits/stdc++.h>
using namespace std;
int m[1000];
int k ,n;
void chinhduoi(int a,int b,int gt){
    for (int i = a; i < b; i++)
    {
        m[i] = gt;
        gt++;
    }
    
}
void khoitao(){
    for (int i = 0; i < k; i++)
    {
        m[i] = i+1;
    }
    
}
void xem(){
    for (int i = 0; i < k; i++)
    {
        cout << m[i] << " " ;
    }
  
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for (int i = 0; i < k; i++)
        {
            cin >> m[i];
        }
        
            int dem =0;
            for (int i = k-1; i >= 0; i--)
            {
                if(m[i] <= n-dem-1 ) {
                    m[i] ++;
                    chinhduoi(i+1,k,m[i]+1);
                    break;
                }
                dem++;
            }
            if(m[0]== n-k+1 && m[k-1]== n) khoitao();
        xem();
        cout << endl;
    }
    return 0;
}

