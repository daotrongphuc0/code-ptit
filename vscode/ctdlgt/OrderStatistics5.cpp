#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin  >> t;
    while(t--){
        int n; cin >> n ;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        int max = -1;
        for (int  i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(m[j] < m[i]) break ;
                if(m[j] - m[i] > max ) max = m[j] - m[i] ;   
            }
            
        }
        cout << max <<endl;
        
        
        
    }
    return 0;
}
