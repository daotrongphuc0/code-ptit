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
void induongdi(int k,int h){
    stack<int> st;
    st.push(h);
    while(st.top()!=k){
        int t = st.top();
        st.push(truoc[t]);
    }
    while(!st.empty()){
        int t = st.top(); st.pop();
        cout<<t<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++){
            ke[i].clear();
        }
        memset(ok,false,sizeof(ok));
        memset(truoc,0,sizeof(truoc));
        int n,m,k,h;
        cin>>n>>m>>k>>h;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        DFS(k);
        if(!ok[h]) cout<<-1<<endl;
        else induongdi(k,h);
    }
}