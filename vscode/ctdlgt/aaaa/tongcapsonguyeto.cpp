#include <bits/stdc++.h>
using namespace std;

int kt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
		}
		return 1;
		}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d=-1;
		cin>>n;
		for(int i=2;i<=n/2;i++){
			if(kt(i)==1){
				if(kt(n-i)==1){
				d=1;
				cout<<i<<" "<<n-i;
				break;
				}
			}
		}
		if(d!=1) cout<<-1;
		cout<<endl;
	}
		return 0;
	}