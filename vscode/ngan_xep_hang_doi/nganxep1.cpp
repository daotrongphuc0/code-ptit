#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    stack<int> st;
    while(cin >> s)
    {
         
        if(s == "push"){int n ; cin >> n; st.push(n); }
        if(s == "pop") {st.pop();}
        if(s == "show") 
        {
            if(!st.empty())
            {
                stack<int> st1;
                while(!st.empty())
                {
                    int t =st.top();
                    st.pop();
                    st1.push(t);
                }
                while(!st1.empty())
                {
                    int t =st1.top();
                    cout <<t<<" ";
                    st1.pop();
                    st.push(t);
                }

            }
            else cout << "empty" ;
            cout << endl;
        
        }
    }
    return 0;
}
