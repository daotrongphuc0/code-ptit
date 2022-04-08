#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		int j=s.size()-2;
		while((j>0) && (s[j]>=s[j+1])) j--;
		if(j==0) cout<<n<<" "<<"BIGGEST";
		else{
			 int k=s.size()-1;
			 while(s[k]<=s[j]) k--;
             int stmp=s[j]; s[j]=s[k]; s[k]=stmp;
             int l=j+1, r=s.size()-1;
             while(l<=r){
                 stmp=s[l]; s[l]=s[r]; s[r]=stmp; l++; r--;
            }
            cout<<n<<" ";
			for(int i=0;i<s.size();i++) cout<<s[i];
        }
        cout<<"\n";
        }
        return 0;
    }