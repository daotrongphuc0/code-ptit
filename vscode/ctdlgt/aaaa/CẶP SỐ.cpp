#include<bits/stdc++.h>
using namespace std;

struct data{
    int x,y;
};
bool cmp(data a,data b){
    return a.x<b.x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        data a[n+5];
        int f[n+5];
        for(int i=1;i<=n;i++){
            cin>> a[i].x >> a[i].y;
            f[i]=1;
        }
        sort(a+1,a+1+n,cmp);
        for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                if(a[i].x>a[j].y) f[i]=max(f[i],f[j]+1);
            }
        }
        cout<<f[n]<<endl;
    }
}