#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long kq;
		long *a=new long[n];
		int *b=new int[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
		for(int j=0;j<m;j++){
			cin>>b[j];
			}
		sort(a,a+n);
		sort(b,b+m);
		kq=a[n-1]*b[0];
		cout<<kq<<endl;
		}
		return 0;
	}