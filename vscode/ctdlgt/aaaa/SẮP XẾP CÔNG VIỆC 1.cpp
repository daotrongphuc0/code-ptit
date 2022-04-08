#include<bits/stdc++.h>
using namespace std;
struct  ull {
	int sa,fi;
};
ull h[1001];
bool cmp(ull a,ull b){
	return a.fi<b.fi;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>h[i].sa;
			}
		for(int i=0;i<n;i++){
			cin>>h[i].fi;
			}
		sort(h,h+n,cmp);
		int d=1,i=0;
		for(int j=1;j<n;j++){
			if(h[j].sa>=h[i].fi){
				d++;
				i=j;
				}
			}
		cout<<d<<"\n";
		}
		return 0;
	}