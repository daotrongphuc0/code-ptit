#include<bits/stdc++.h>
using namespace std;

void xuli(long long n){
    queue<long long>q;
    q.push(1);
    int gt=0;
    while(!q.empty()){
        long long x = q.front();
        q.pop();
        if(x<=n){
            gt++;
            q.push(x*10);
            q.push(x*10+1);
        }
    }
    cout<<gt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        xuli(n);
    }
}