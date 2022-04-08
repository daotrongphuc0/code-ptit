#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
		sort(a,a+n);
		int tmp=0;
		for(int i=1;i<n;i++){
			if(a[i]-a[i-1]>1) tmp+=(a[i]-a[i-1]-1);
			}
			cout<<tmp<<endl;
			}
			return 0;
		}