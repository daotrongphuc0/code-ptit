#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t; 
    while (t--){
        int n ,k; cin >> n>>k;
        int m[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
            
        }
        int m1[n*n],x=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                m1[x] =m[i][j];
                x++;
            }
            
        }
        sort(m1,m1+x);
        int y =0;
        for (int i = 0; i < n*n; i++)
        {
            if(i +1  == k) {
                cout << m1[i]<<endl;
                break;
            }
            if(i >1 && m1[i] == m1[i-1]) k++;
        }
        
    }
    return 0;
}
