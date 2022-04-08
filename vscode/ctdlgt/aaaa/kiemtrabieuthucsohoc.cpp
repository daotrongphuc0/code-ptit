#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<char>a;
        bool check;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                check=true;
                char m=a.top();
                a.pop();
                while(m!='('){
                    if(m=='+'||m=='-'||m=='*'||m=='/')
                    check = false;
                    m=a.top();a.pop();
                }
                if(check) break;
            }
            else a.push(s[i]);
        }
        if(check) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}