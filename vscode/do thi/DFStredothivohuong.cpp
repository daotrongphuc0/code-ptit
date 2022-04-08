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
void khoitao(){
    for(int i=1;i<=n;i++) chuaxet[i]=true;
}
void DFS(int k){
   chuaxet[k]=false;
   cout<<k<<" ";
   for(int i=1;i<=n;i++)
       if(a[k][i]==1 && chuaxet[i]==true) DFS(i);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        nhap();
        khoitao();
        DFS(k);
        cout<<endl;
    }
    return 0;
}