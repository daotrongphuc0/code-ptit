#include<bits/stdc++.h>
using namespace std;
const long long M=1e9+7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long a[n+5],res=1;
        if(n<k) res=0;
        for(int i=n-k+1;i<=n;i++)
            res=(res*i)%M;
        cout<<res<<endl;
    }
    return 0;
}