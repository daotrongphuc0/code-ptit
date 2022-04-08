#include<bits/stdc++.h>
using namespace std;
const int M=1e9;
int n,a[100005],L[100005],R[100005];
void create_left(){
    stack<int>st; int i;
    a[0]=M;
    st.push(0);
    for(i=1;i<=n;i++){
        while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
        if(!st.empty()) L[i]=st.top();
        else L[i]=0;
        st.push(i);
    }
}

void create_right(){
    stack<int>st; int i;
    a[n+1]=M;
    st.push(n+1);
    for(i=n;i>=1;i--){
        while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
        if(!st.empty()) R[i]=st.top();
        else R[i]=n+1;
        st.push(i);
    }
}

void xuli(){
    create_left();
    create_right();
    long long kq=0;
    for(int i=1;i<=n;i++){
        long long s=(long long)a[i]*(R[i]-L[i]-1);
        kq=max(kq,s);
    }
    cout<<kq<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        xuli();
    }
}