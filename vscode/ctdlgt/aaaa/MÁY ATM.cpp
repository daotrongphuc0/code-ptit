#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
int n,s,a[30],ans = 999999999;
 
void Try(int i , ll tmp , int d){
	if (tmp>s || d>ans) return;	
	if(i==n){
		if (tmp == s) ans = min(ans,d);
		return;
	}
	Try(i+1,tmp,d);
	Try(i+1,tmp+a[i],d+1);
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
	int t; cin>>t;
	while(t--){
	    ans = 999999999;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++) cin>>a[i];
	Try(0,0,0);
	if (ans==999999999) cout<<-1<<endl;
	else cout<<ans<<endl;
 }
return 0;
}