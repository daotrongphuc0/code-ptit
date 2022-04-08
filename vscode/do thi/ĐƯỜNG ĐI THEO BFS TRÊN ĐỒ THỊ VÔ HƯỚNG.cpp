#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> List[1005];
int truoc[1005],n,m,u,v;

void BFS(int u){
    queue<int> st;
    st.push(u);
    chuaxet[u]=false;
    while(!st.empty()){
        int x = st.front(); st.pop();
        for(int i=0;i<List[x].size();i++){
            int y = List[x][i];
            if(chuaxet[y]){
                st.push(y);
                chuaxet[y]=false;
                truoc[y]=x;
            }
        }
    }
}

void induongdi(){
    stack<int> q;
    q.push(v);
    while(q.top()!=u){
        int t = q.top();
        q.push(truoc[t]);
    }
    while(!q.empty()){
        int t = q.top(); q.pop();
        cout<<t<<" ";
    }
    cout<<endl;
}
int main(){
    int t,i,x,y;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) List[i].clear();
        memset(chuaxet,true,sizeof(chuaxet));
        memset(truoc,0,sizeof(truoc));
        cin>>n>>m>>u>>v;
        for(int i=0;i<m;i++){
            cin>>x>>y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        BFS(u);
        if(chuaxet[v]) cout<<-1<<endl;
        else induongdi();
    }
}