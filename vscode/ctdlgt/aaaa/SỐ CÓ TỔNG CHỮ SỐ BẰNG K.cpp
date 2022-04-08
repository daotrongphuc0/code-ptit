#include<bits/stdc++.h>
using namespace std;
long long f[105][50005];
const long long M=1e9+7;

int main(){
	for(int i=0;i<105;i++)
        f[i][0]=0;
    for(int j=0;j<50005;j++)
        f[0][j]=0;
	for(int i=1;i<=9;i++)
	    f[1][i]=1;
	for(int i=1;i<=100;i++)
	    for(int so=0;so<=9;so++)
	        for(int j=so;j<=50000;j++)
	            f[i][j]=(f[i][j]%M+f[i-1][j-so]%M)%M;
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<f[n][k]<<endl;
		}
	}