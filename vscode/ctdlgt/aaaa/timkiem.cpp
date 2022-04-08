#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int *a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
		int tmp=0;
		for(int i=0;i<n;i++){
			if(a[i]==x) tmp++;
			}
		if(tmp==0) cout<<-1<<endl;
		 else cout<<tmp<<endl;
		 }
		 return 0;
		 }