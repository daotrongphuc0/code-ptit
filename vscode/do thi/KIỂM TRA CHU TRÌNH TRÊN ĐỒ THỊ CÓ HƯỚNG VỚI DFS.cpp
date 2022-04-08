#include<bits/stdc++.h>
using namespace std;

vector<int> List[1005];
bool chuaxet[1005];
int n,m;

bool DFS(int u){
    stack<int> q;
    q.push(u);
    chuaxet[u]=false;
    while(!q.empty()){
        int t=q.top();q.pop();
        for(int i=0;i<List[t].size();i++){
            int v=List[t][i];
            if(chuaxet[v]){
                chuaxet[v]=false;
                q.push(v);
                q.push(t);
                break;
            }
            else if(v==u) return true;
        }
    }
    return false;
}
void chutrinh(){
    for(int i=1;i<=n;i++){
        memset(chuaxet,true,sizeof(chuaxet));
        if(DFS(i)){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
        }
        chutrinh();
    }
}