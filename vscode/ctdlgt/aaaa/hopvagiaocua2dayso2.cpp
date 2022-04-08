#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,a;
        cin>>n>>m;
        int f[100005]={0};
        for(int i=0;i<n+m;i++){
            cin>>a;
            f[a]++;
        }
        for(int i=0;i<100001;i++){
            if(f[i]>0) cout<<i<<" ";
        }
        cout<<endl;
        for(int i=0;i<100001;i++){
            if(f[i]>1) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}