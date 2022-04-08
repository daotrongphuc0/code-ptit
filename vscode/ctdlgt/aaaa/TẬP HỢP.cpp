#include<bits/stdc++.h>
using namespace std;
int n,k,p,c[22],dem=0;

void Try(int i){
    for(int j=c[i-1]+1;j<=n-k+i;j++){
        c[i]=j;
        if(i==k){
            int sum=0;
            for(int i=1;i<=k;i++) sum+=c[i];
            if(sum==p) dem++;
        }
        else Try(i+1);
    }
}

int main(){
    int t=100;
    while(t--){
        cin>>n>>k>>p;
        dem=0;
        Try(1);
        cout<<dem<<"\n";
    }
}