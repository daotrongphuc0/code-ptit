#include<bits/stdc++.h>
using namespace std;

void xuli(string s,int k,string &d,int l)
{
	if(k==0) return ;
	int n = s.size();
	char max = s[l];
	for(int i=l+1;i<n;i++){
		if(max<s[i])
		max = s[i];
		}
	if(max != s[l]) --k;
	for(int i = l;i<n;i++){
		if(s[i]==max){
			swap(s[l],s[i]);
			if(s>d)
			d=s;
			xuli(s,k,d,l+1);
			swap(s[l],s[i]);
		}
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s,d;
		int k;
		cin>>k>>s;
		d=s;
		xuli(s,k,d,0);
		cout<<d<<endl;
		}
	return 0;
	}