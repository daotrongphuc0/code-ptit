#include<bits/stdc++.h>
using namespace std;
struct ad{
    int dau,cuoi;
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        ad a[m+5];
        for(int i=1;i<=m;i++) cin>>a[i].dau>>a[i].cuoi;
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(int j=1;j<=m;j++){
                if(a[j].dau==i) cout<<a[j].cuoi<<" ";
            }
            cout<<"\n";
        }
    }
}