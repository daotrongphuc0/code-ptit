#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int f[n+5][n+5];
        memset(f,0,sizeof(f));
        for(int i=0;i<n;i++) f[i][i]=1;
        for(int k=1;k<n;k++){
            for(int i=0;i<n-k;i++){
                int j=i+k;
                if(s[i]==s[j]) f[i][j]=f[i+1][j-1]+2;
                else f[i][j]=max(f[i+1][j],f[i][j-1]);
            }
        }
        cout<<n-f[0][n-1]<<endl;
    }
}