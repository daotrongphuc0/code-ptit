#include <bits/stdc++.h> 
using namespace std;  

void print(int n,int k,char s[]){ 
    for(int i=1 ; i<=n ; i++){ 
	    cout<<s[i]; 
		} 
	cout<<endl; 
	} 
int main() { 
    int t; cin>>t; 
	while(t--){
		int n,k;
		char s[20];
	    cin>>n>>k; 
		for(int i=1 ; i<=n ; i++) s[i] = '0'; 
		int a = n; 
		int d = 0; 
		while(a){ 
		    if(s[a] == '0'){ 
			    s[a] = '1'; 
				d++; 
				a = n; 
				if(d == k){ 
				    print(n,k,s); 
					} 
				} 
			else { 
			    d--; 
				s[a] = '0'; 
				a--; 
				} 
			} 
		} 
	return 0; 
}