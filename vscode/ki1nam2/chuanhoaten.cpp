#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; getline(cin, s);
    istringstream tk(s); vector<string> v;
    while(tk >> s) v.push_back(s);
    
    cout <<   v;
    return 0;
}