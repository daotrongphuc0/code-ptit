#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; getline(cin, s);
    for (int  i = 0; i < s.size(); i++)
    {
        if(s.at(i) >= 'A' && s.at(i) <= 'Z'){
            s.at(i) += 32;
        }
    }
    istringstream tk(s); vector<string> v;
    while(tk >> s) v.push_back(s);
    string t = v.back(); v.pop_back(); // ten
    cout << t;
 //   for(auto i : t) cout << (i |= ' ');
 //  for(auto i : v) cout << (i[0] );
    for (int  i = 0; i < v.size(); i++)
    {
        string kt = v.at(i);
        cout << kt.at(0);
    }
    
    cout << "@ptit.edu.vn";
    return 0;
}