#include<bits/stdc++.h>
using namespace std;

void gen(string &s,int n,bool &ok){
    int i=n-1;
    while(s[i]=='H'){
        s[i]='A';
        i--;
    }
    if(i<0) ok=true;
    s[i]='H';
}
bool check(string s){
    int count=0,a=0;
    for(int i=0;i<s.length();i++){
        if((i==0)&&(s[i]=='A')) return false;
        if((s[i]==s[i+1])&&(s[i]=='H')) return false;
        if((i==s.length()-1)&&(s[i]=='H')) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        bool ok=false;
        vector<string> res;
        for(int i=0;i<n;i++)
            s.push_back('A');
        while(!ok){
            if(check(s)) res.push_back(s);
            gen(s,n,ok);
        }
        for(int j=0;j<res.size();j++) cout<<res[j]<<endl;
    }
}