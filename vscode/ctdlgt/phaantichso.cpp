#include <bits/stdc++.h>
using namespace std;
int m[12];
int n;
void xem(){
    cout << "(";
    for (int i = 0; i < n; i++)
    {
        if(m[i] != 0 ) cout << m[i];
        if(m[i+1] != 0) cout << " ";
    }
    cout << ") ";
    
}

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int vt;
         cin >> n;
        for (int i = 0; i < n+2; i++)
        {
            m[i] = 0;
        }
        
        m[0] =n;
        if(n!= 1) xem();
        bool cauhinhcuoi = false ;
        while(!cauhinhcuoi)
        {
            int vt;
            int dem =0;
            for (int i =  n-1; i >= 0; i--)
            {
                if(m[i] == 1 )dem++;
                if(m[i]> 1){
                    m[i] --;
                    vt = i;
                    break;

                }
            }
            dem++;
            for (int i = vt+1; i < n; i++)
            {
                if(dem > m[vt]){
                    m[i] = m[vt];
                    dem -= m[vt];
                }
                else {
                    m[i] = dem;
                    dem =0;
                }
            }
            
          xem();  
          if(m[0] == 1) cauhinhcuoi =true;
        }

    
    cout << endl;
    }
    return 0;
}
