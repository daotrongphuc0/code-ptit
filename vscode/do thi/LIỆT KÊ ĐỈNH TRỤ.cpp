#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> List[1005];
int n,m,dem;
void DFS(int s){
    dem++;
    chuaxet[s]=false;
    for(int i=0;i<List[s].size();i++){
        int v=List[s][i];
        if(chuaxet[v]) DFS(v);
    }
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
        for(int i=1;i<=n;i++){
            chuaxet[i]=false;
            dem=0;
            if(i==1) DFS(2);
            else if(i==n) DFS(1);
            else DFS(i+1);
            if(dem!=n-1) cout<<i<<" ";
            memset(chuaxet,true,sizeof(chuaxet));
        }
        cout<<endl;
    }
}