#include<bits/stdc++.h>
using namespace std;
const long long M =1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+3];
        long long f[k+3]={0};
        for(int i=1;i<=n;i++) cin>>a[i];
        f[0]=1;
        for(int i=1;i<=k;i++){
            for(int j=1;j<=n;j++){
                if(a[j]<=i)  f[i] = (f[i]+f[i-a[j]])%M;
            }
        }
        cout<<f[k]<<endl;
    }
    return 0;
}