#include<bits/stdc++.h>
using namespace std;

int xuli(int a[],int n){
    int res = INT_MIN;
    int a1[n],a2[n];
    for(int i=1;i<=n;i++){
        a1[i]=a[i];
        a2[i]=a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(a[i]>a[j]) a1[i]=max(a1[i],a1[j]+a[i]);
        }
    }
    for(int i=n;i>=1;i--){
        for(int j=n;j>i;j--){
            if(a[i]>a[j]) a2[i]=max(a2[i],a2[j]+a[i]);
        }
    }
    for(int i=1;i<=n;i++){
        res=max(res,a1[i]+a2[i]-a[i]);
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        for(int i=1;i<=n;i++) cin>>a[i];
        cout<<xuli(a,n)<<endl;
    }
}