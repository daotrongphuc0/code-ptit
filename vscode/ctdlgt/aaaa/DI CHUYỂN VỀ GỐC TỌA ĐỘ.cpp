#include<bits/stdc++.h>
using namespace std;
long long c[30][30];
void tinh(){
    int i,j;
    for(i=0;i<=25;i++){
        c[i][0]=1;
        c[0][i]=1;
    }
    for(i=1;i<=25;i++){
        for(j=1;j<=25;j++){
            c[i][j]=c[i-1][j]+c[i][j-1];
        }
    }
}
int main(){
    int t,n,m;
    tinh();
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<c[n][m]<<endl;
    }
}