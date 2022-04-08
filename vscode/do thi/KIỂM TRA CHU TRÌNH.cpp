#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005],check;
vector<int> List[1005];
int n,m;
void DFS(int u,int t){
    chuaxet[u]=false;
    for(int i=0;i<List[u].size();i++){
        int v = List[u][i];
        if(chuaxet[v]) DFS(v,u);
        else if(v!=t) check = true;
    }
}
void chutrinh(){
    check = false;
    for(int i=1;i<=n;i++){
        memset(chuaxet,true,sizeof(chuaxet));
        DFS(i,0);
        if(check){
            cout<<"YES"<<endl; return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) List[i].clear();
        memset(chuaxet,true,sizeof(chuaxet));
        cin>>n>>m;
        for(int i=0;i<m;i++){
            cin>>x>>y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        chutrinh();
    }
}