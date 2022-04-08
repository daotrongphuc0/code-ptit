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
	    if ( n < 2 ) { cout << -1; break; }
	     sort(a,a+n);
	     if(a[0]==a[1]) cout<<-1<<"\n";
	         else cout<<a[0]<<" "<<a[1]<<"\n";
	     }
	     return 0;
	     }