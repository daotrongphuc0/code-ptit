#include <bits/stdc++.h>
using namespace std;
int m[11],gt[11];
int n;
void xem(){
    cout << "[";
    int so1 =1;
    for (int i = 0; i < n; i++)
    {
        if(m[i] == 1){
            if(so1) cout << gt[i] ;
            else cout << " " << gt[i];
            so1 =0;
        }
    }
    cout << "] ";
    
}
bool kt(int s){
    for (int i = 0; i < n; i++)
    {
        if(m[i] == 1 ) s -= gt[i];
    }
    if(s == 0 ) return true ;
    return false;
    
}
void sinh()
{
    m[n-1]--;
    for (int i =n-1;i>=0;i--)
    {
        if(m[i] < 0 ) {
            m[i] =1;
            m[i-1]--;
        }
    }
    

}

int main(){
    int t;cin >> t;
    while(t--){
        int s;
        int dk =1;
        cin >> n>> s;
        for (int i = 0; i < n; i++)
        {
            cin >> gt[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            m[i] = 1;
        }
        int so =1;
        for (int i = 0; i < n; i++)
        {
              so *= 2;
        }
        for (int i = 0; i < so; i++)
        {
            if(kt(s)){
                 xem() ;
                 dk =0;
            }
            sinh();
        }
        
        if(dk) cout << -1;
        cout <<endl;
    }
    return 0;
}

