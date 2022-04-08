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
    for (int  i = 0; i < t.size(); i++)
    {
            t.at(i) -= 32;
    }
    for (int  i = 0; i < v.size(); i++)
    {
        string kt = v.at(i);
        kt.at(0) -= 32;
        cout << kt ;
        if(i != v.size() -1) cout<<" ";
    }
    cout << ", " << t;
    return 0;
}