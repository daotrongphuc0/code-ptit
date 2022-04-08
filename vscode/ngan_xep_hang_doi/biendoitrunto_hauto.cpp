#include <bits/stdc++.h>
using namespace std;
int degree(char s)
{
    if(s== '^' ) return 5;
    if(s=='*' || s== '/' || s =='^') return 4;
    if(s =='+' || s == '-') return 3;
    return 2;
}
void chuyen()
{
    string s,res="";
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if(islower(s[i]) || isupper(s[i]) ) res += s[i];
        else if(s[i] =='(') st.push(s[i]) ;
        else if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){res += st.top();st.pop();}
            st.pop();
        }
        else if(s[i] =='+' || s[i] =='-' || s[i] =='*' || s[i] =='/' || s[i] =='^' )
        {
            while(!st.empty() && degree(st.top()) >= degree(s[i]) )
            {
                res +=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    cout<< res <<endl; 
}
int main(){
    int t; cin >> t;//cin.ignore();
    while(t--)
    {
    chuyen();
        

    }
    return 0;
}
