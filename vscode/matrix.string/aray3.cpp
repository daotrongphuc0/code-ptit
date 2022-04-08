#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; cin>>t; 
    while(t--){ 
        int n,k;
        cin>>n>>k; 
        int a[n]; 
        int cnt=0; 
        for(int i=0;i<n;i++){ 
            cin>>a[i]; 
            if(a[i]<=k) cnt++; 
            } 
        int dem=0; 
        for(int i=0;i<cnt;i++){ 
            if(a[i]<=k) dem++; 
            }
         int ans=dem; 
    for(int i=cnt;i<n;i++){ 
       if(a[i]<=k) dem++; 
       if(a[i-cnt]<=k) dem--; 
       ans=max(ans,dem); 
    } 
cout<<cnt-ans<<endl; 
} 
}
