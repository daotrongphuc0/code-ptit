#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long sum=0;
		cin>>n;
		vector<long long>a(n);
		vector<long long>b(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int j=0;j<n;j++) cin>>b[j];
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<long long>());
		for(int i=0;i<n;i++)
		   sum+=a[i]*b[i];
		cout<<sum<<endl;
		}
	
	return 0;
	}