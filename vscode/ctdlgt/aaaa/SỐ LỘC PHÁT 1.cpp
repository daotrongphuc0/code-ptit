#include<bits/stdc++.h>
using namespace std;

void xuli(int n){
    queue<long long>q;
    vector<long long>a;
    q.push(6);
    q.push(8);
    while(!q.empty()){
        long long x=q.front();
        q.pop();
        a.push_back(x);
        if(x<pow(10,n-1)){
            q.push(x*10+6);
            q.push(x*10+8);
        }
    }
    for(int i=a.size()-1;i>=0;i--) cout<<a[i]<<" ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        xuli(n);
        cout<<endl;
    }
}