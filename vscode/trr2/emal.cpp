#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; getline(cin, s);
    istringstream tk(s); vector<string> v;
    while(tk >> s) v.push_back(s);
    string t = v.back(); 
    for(int i = 0; i < v.size() - 1; ++i){
        v[i][0] &= '_';
        for(int j = 1; j < v[i].length(); ++j) v[i][j] |= ' ';
        cout << v[i] << " ,"[i == v.size() - 2]; 
    }
    cout << " ";
    for(auto i : t) cout << (i &= '_');
    return 0;
}