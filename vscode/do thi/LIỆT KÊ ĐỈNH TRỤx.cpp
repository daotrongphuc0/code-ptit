#include<bits/stdc++.h>
using namespace std;

vector<int> List[1005];
bool chuaxet[1005];
int n,m;

void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u]=false;
    while(!q.empty()){
        int x=q.front();q.pop();
        for(int i=0;i<List[x].size();i++){
            int y = List[x][i];
            if(chuaxet[y]){
                q.push(y);
                chuaxet[y]=false;
            }
        }
    }
}
int main(){
    int t,i,x,y;
    cin>>t;
    while(t--){
        for(i=0;i<1005;i++) List[i].clear();
        memset(chuaxet,true,sizeof(chuaxet));
        cin>>n>>m;
        for(i=0;i<m;i++){
            cin>>x>>y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        for(int u=1;u<=n;u++){
            chuaxet[u]=false;
            if(u==1) BFS(2);
            else  BFS(1);
            bool check = false;
            for(i=1;i<=n;i++) 
                if(chuaxet[i]) check = true;
            if(check) cout<<u<<" ";
            memset(chuaxet,true,sizeof(chuaxet));
        }
        cout<<endl;
    }
}