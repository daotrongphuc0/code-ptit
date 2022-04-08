#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        long long res = 0,f[n+5];
        for(int i=1;i<=n;i++) cin>>a[i];
        memset(f,0,sizeof(f));
        for(int i=1;i<=n;i++){
            f[i]=a[i];
            for(int j=1;j<i;j++){
                if(a[i]>a[j]) f[i] = max(f[i],f[j]+a[i]);
            }
            res = max(res,f[i]);
        }
        cout<<res<<"\n";
    }
}