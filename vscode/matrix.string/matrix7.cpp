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
        int dem =1;
        for (int i = 0; i < n; i++)
        {
            if(dem % 2 == 1){
                for (int j = 0; j < n; j++)
                    cout << m[i][j] << " ";
                
            }
            else {
                for (int j = n-1; j >= 0; j--)
                    cout << m[i][j] << " ";
                
            }
            dem ++;
        }
        cout << endl;
    }
    return 0;
}
        
        