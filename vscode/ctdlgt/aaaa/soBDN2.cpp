#include<bits/stdc++.h>
using namespace std;

void xuli(int n){
    queue<long long>q;
    q.push(1);
    while(!q.empty()){
        long long x = q.front();
        q.pop();
        if(x%n==0){
            cout<<x<<endl;
            break;
        }
        else{
            q.push(x*10);
            q.push(x*10+1);
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        xuli(n);
    }
}