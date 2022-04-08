#include<bits/stdc++.h>
using namespace std;

int a[30],n;
long long s;
long long ans = 999999999;
 
void Try(int i , long long tong , long long k){
	if (tong>s || k>ans) return;	
	if(i==n){
		if (tong == s) ans = min(ans,k);
		return;
	}
	Try(i+1,tong,k);
	Try(i+1,tong+a[i],k+1);
}
 
int main(){
	
	int t; cin>>t;
	while(t--){
	ans = 999999999;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++) cin>>a[i];
	Try(0,0,0);
	if (ans==999999999) cout<<-1;
	else cout<<ans;
    cout << "\n";
 }
return 0;
}
