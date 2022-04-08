#include<bits/stdc++.h>
using namespace std;

vector<int> List[1005];
int visit[1005];
int n,m;
bool check;

void BFS(int u){
    queue<int> q;
    q.push(u);
    visit[u]=1;
    while(!q.empty()){
        int x=q.front();q.pop();
        for(int i=0;i<List[x].size();i++){
            int y = List[x][i];
            if(visit[y]==0){
                q.push(y);
                visit[y]=1;
            }
            else if(visit[y]==1) check = true; 
        }
        visit[x]=2;
    }
}
void chutrinh(){
    check = false;
    for(int i=1;i<=n;i++) BFS(i);
    if(check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t,i,x,y;
    cin>>t;
    while(t--){
        for(i=0;i<1005;i++) List[i].clear();
        memset(visit,0,sizeof(visit));
        cin>>n>>m;
        for(i=0;i<m;i++){
            cin>>x>>y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        chutrinh();
    }
}