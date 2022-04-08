#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int i=n-1;
        while((i>0)&&s[i]=='0') {
            i--;
        }
        for(int j=i;j<n;j++) s[j]=1-(s[j]-'0')+'0';
        for(int j=0;j<n;j++) cout<<s[j];
        cout<<endl;
    }
}