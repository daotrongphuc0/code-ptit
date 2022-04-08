#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin.ignore();
        cin >> n;
        int dt = n.length();
        if((n.at(dt-1) == '8' )&& (n.at(dt-2) == '6')) cout << '1'<< endl;
        else cout << '0'<< endl;
      //  cout << (n[dt-1]== '8' && n[dt-2] == '6' ? 1:0 ) <<endl;
    }
    return 0;
}
