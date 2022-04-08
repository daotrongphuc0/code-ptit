#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int m[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
            
        }
        int duoi = n-2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if((i > 0) && (i< n-1)&&(j>0)&&(j<n-1))
                    cout << "  ";
                else cout << m[i][j] << " ";
            }
            cout << endl;
        }
        
    }
    return 0;
}
