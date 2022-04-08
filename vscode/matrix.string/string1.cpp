#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string m;
        cin >> m;
        int k;
        cin >> k;
        int dem = m.size();
        for (int i = 0; i < m.size() ; i++)
        {
            for (int j = i+1 ;j < m.size(); j++)
            {
                if(m.at(i) == m.at(j)){
                     dem--; 
                     break;
                     }
            }
            
        }
        if(dem + k >= 26) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
