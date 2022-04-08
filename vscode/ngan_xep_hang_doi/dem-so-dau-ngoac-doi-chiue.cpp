#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int n =s.length();
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] =='(') st.push('(');
            else 
            {
                if(!st.empty()){st.pop();n-= 2;}
            }
        }
        cout << n/2 <<endl;
    }
    return 0;
}
