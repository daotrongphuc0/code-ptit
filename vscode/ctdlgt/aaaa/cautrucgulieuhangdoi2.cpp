#include<bits/stdc++.h>
using namespace std;


int main(){
    int q;
    cin>>q;
    queue<int>a;
    string s;
    while(q--){
        cin>>s;
        if(s=="PUSH"){
            int n; cin>>n;
            a.push(n);
        }
        else if(s=="POP"&&!a.empty()) a.pop();
        else if(s=="PRINTFRONT"){
            if(a.empty()){
                cout<<"NONE"<<"\n";
                continue;
            }
            else cout<<a.front()<<"\n";
        }
    }
}