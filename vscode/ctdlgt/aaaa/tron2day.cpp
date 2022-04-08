#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,s;
		cin>>n>>m;
		s=m+n;
		int *a=new int[s];
		for(int i=0;i<s;i++){
			cin>>a[i];
			}
		sort(a,a+s);
		for(int i=0;i<s;i++){
			cout<<a[i]<<" ";
			}
			cout<<"\n";
			}
			return 0;
			}