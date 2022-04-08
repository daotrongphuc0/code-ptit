#include<bits/stdc++.h>
using namespace std;
int n,m,dem=0;
int a[1005][1005];
bool chuaxet[1005];

void nhap(){
    int u,v;
    cin>>n>>m;
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
void BFS(int u){
    int i;
    dem++;
    chuaxet[u]=false;
    for(i=1;i<=n;i++)
        if((a[u][i]==1)&&(chuaxet[i]==true)) BFS(i);
}
void duyetcau(){
    khoitao();
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i][j]==1){
                a[i][j]=0; a[j][i]=0;
                dem=0; BFS(1);
                if(dem<n) cout<<i<<" "<<j<<" ";
                a[i][j]=1; a[j][i]=1;
                khoitao();
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        nhap();
        khoitao();
        duyetcau();
        cout<<endl;
    }
}