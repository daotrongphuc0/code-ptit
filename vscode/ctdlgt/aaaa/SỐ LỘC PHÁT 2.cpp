#include<bits/stdc++.h>
using namespace std;

void xuli(int n){
    queue<long long>q;
    vector<long long>a;
    q.push(6);
    q.push(8);
    int gt = 0;
    while(!q.empty()){
        long long x=q.front();
        q.pop();
        gt++;
        a.push_back(x);
        if(x<pow(10,n-1)){
            q.push(x*10+6);
            q.push(x*10+8);
        }
    }
    cout<<gt<<"\n";
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
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