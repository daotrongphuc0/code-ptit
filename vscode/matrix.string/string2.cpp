#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        int kq  = 0;
        for (int i = 0; i < n.size(); i++)
        {
            if(i % 2 == 0) kq += (n.at(i) - '0');
            else kq -= (n.at(i) - '0');
        }
        if (kq % 11 == 0) cout << 1 << endl;
        else cout << 0 <<endl;
    }
        
    return 0;
}
