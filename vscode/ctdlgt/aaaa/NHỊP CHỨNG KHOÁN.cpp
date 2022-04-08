#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
void xuli(){
    int R[100005],i;
    for(int i=0;i<n;i++) R[i]=-1;
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        if(st.empty()||a[i]<=a[st.top()]) st.push(i);
        else{
            while(!st.empty()&&a[i]>a[st.top()]) {
                R[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
    }
    for(int i=0;i<n;i++) cout<<i-R[i]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        xuli();
    }
}