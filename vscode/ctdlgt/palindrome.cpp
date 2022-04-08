#include <bits/stdc++.h>
using namespace std;
string s;
int dd = s.length();
bool dequy(int n){
    if(n >= dd/2-1) return true ;
    else {
        if(s.at(n) == s.at(dd-n-1)) return dequy(n+1);
        else return false ;
    }
}

int main(){
    getline(cin ,s);
    if(dequy(0)) cout << 1;
    else cout << 0 ;
    return 0;
}
