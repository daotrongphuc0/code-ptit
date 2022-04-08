#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n ;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        int dem = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if(m[i] == m[j] ) {
                    dem =i;
                    break;
                    }
            }
            if(dem != -1) break;
        }
        if( dem != -1) cout << m[dem] << endl;
        else cout << dem <<endl;
        
    }
    return 0;
}
