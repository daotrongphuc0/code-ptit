#include <bits/stdc++.h>
using namespace std;
int m[50][50];
int used[50];
int n;
int kq[50];
void hmt(int k){
    for(int y=1;y<=n;y++)
        if(m[kq[k-1]][y]==1)
           if((k==n+1)&&(y==kq[1])){
               for(int i=1;i<=n;i++) cout<<" "<<kq[i]; cout<<" "<<kq[1]<<endl;
           }
           else {
           if(used[y]==0){
           kq[k]=y; used[y]=1; hmt(k+1);  used[y]=0;
        }   
    }
}
int main(){
    cin>>n>>kq[1];
    for(int i=1;i<=n;i++)
       for(int j=1;j<=n;j++) cin>>m[i][j];
    for (int i = 1; i <=n; i++)
    {
        used[i]=0;
    }
    used[kq[1]] =1;
    hmt(2);
    return 0;
}
