#include<bits/stdc++.h>
using namespace std;

int main(){
    int q,n;
    cin>>q;
    stack<int>a;
    string s;
    while(q--){
        cin>>s;
        if(s=="PUSH") 
        {
            cin>>n;
            a.push(n);
        }
        else if(s=="POP"&&!a.empty()) a.pop();
        else if(s=="PRINT")
        {
            if(a.empty())
            {
                cout<<"NONE"<<"\n";
                continue;
            }
            cout<<a.top()<<"\n";
        }

    }
}