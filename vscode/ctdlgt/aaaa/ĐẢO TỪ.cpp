#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<string>a;
        istringstream is(s);
        while(is>>s) a.push(s);
        while(!a.empty()) {
            cout<<a.top()<<" ";
            a.pop();
        }
        cout<<endl;
    }
}