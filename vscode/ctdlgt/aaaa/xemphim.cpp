#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int a[n+5],f[n+5][m+5];
	for(int i=1;i<=n;i++) cin>>a[i];
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i]<=j)
			    f[i][j]=max(f[i-1][j],f[i-1][j-a[i]]+a[i]);
			else f[i][j]=f[i-1][j];
			}
		}
	cout<<f[n][m]<<endl;
	}