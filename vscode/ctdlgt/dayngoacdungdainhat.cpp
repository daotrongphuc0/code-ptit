#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin .ignore();
    while(t--)
    {
        string s;
        cin >> s;
        int dem =0,ma =0;
        stack<char> p;
        for (int i = 0; i < s.length(); i++)
        {
            ma = max(ma,dem);
            if(s[i] == '('){p.push(s[i]); dem =0;}
            else {
                if(p.top() == '(') {dem +=2;p.pop();}
            }
        }
        
    }
    return 0;
}

