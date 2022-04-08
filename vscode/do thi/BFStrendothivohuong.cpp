#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[1005][1005];
bool chuaxet[1005];
void nhap(){
    int u,v;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) a[i][j]=0;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;
    }
}
void init(){
    for(int i=1;i<=n;i++) chuaxet[i]=true;
}
void BFS(int k){
    queue<int>hangdoi;
    cout<<k<<" ";
    chuaxet[k]=false;
    hangdoi.push(k);
    while(!hangdoi.empty()){
        int s = hangdoi.front();
        hangdoi.pop();
        for(int i=1;i<=n;i++){
            if(chuaxet[i]==true&&a[s][i]==1){
                cout<<i<<" ";
                hangdoi.push(i);
                chuaxet[i]=false;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        nhap();
        init();
        BFS(k);
        cout<<endl;
    }
}