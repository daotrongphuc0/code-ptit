#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
            int n;
            cin >> n;
            int m[n];
            for (int i = 0; i < n; i++)
            {
                cin >> m[i];
            }
        //    int a ,b;
            sort(m,m+n);
            int dem = 0;
            for (int  i = 1; i < n; i++)
            {
                if(m[i] != m[i-1] ) dem = m[i] - m[i-1] -1;
            }
            
        cout << dem << endl;
    }
    return 0;
}
