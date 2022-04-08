#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5],dem[n+5]={0},s=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++){
			dem[i]=1;
			for(int j=1;j<i;j++){
			    if(a[i]>=a[j]) dem[i]=max(dem[i],dem[j]+1);
			    }
			s=max(s,dem[i]);
		}
		cout<<n-s<<endl;
		}
	return 0;
	}