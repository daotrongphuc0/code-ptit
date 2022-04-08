#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,res=0;
        cin>>n>>k;
        int a[n+5];
        bool ok = false;
        int l=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            res += a[i];
            while(res>k&&l<i){
                res-=a[l];
                l++;
                }
                if(res==k) {
                    ok=true;
                }
            }
        if(ok) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}