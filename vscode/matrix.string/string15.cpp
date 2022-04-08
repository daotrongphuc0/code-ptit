#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string m;
        cin >> m;
        int k=m.size();
      //  int dem = m.size();
        for (int i = 0; i < m.size() ; i++)
        {
            for (int j = i+1 ;j < m.size(); j++)
            {
                if(m.at(i) == m.at(j)){
                   //  dem--; 
                     k++;
                     break;
                     }
            }
            
        }
    cout << k <<endl ;
    }
    return 0;
}