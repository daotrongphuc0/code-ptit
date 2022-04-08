#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];
int truoc[1005];

void DFS(int k){
    ok[k]=true;
    for(int i=0;i<ke[k].size();i++){
        if(!ok[ke[k][i]]){
            truoc[ke[k][i]]=k;
            DFS(ke[k][i]);
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) ke[i].clear();
        memset(ok,false,sizeof(ok));
        memset(truoc,0,sizeof(truoc));
        int n,m,dem=0;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
            if(!ok[i]){
                dem++;
                DFS(i);
            }
        }
        cout<<dem<<endl;
    }
}