#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int l1=s1.length(),l2=s2.length();
		int f[l1+5][l2+5];
		memset(f,0,sizeof(f));
		for(int i=0;i<=l1;i++){
			for(int j=0;j<=l2;j++){
				if(i==0||j==0) f[i][j]=i+j;
				else if(s1[i-1]==s2[j-1]) f[i][j]=f[i-1][j-1];
				else f[i][j]=min(f[i-1][j-1],min(f[i-1][j],f[i][j-1]))+1;
				}
			}
		cout<<f[l1][l2]<<endl;
		}
	return 0;
}