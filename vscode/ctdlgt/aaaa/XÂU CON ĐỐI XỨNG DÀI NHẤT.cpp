#include <bits/stdc++.h>
using namespace std;
int F[1001][1001];
int tinh(string s){
	int i,j,k,n=s.length();
	int kq=1;
	memset(F,0,sizeof(F));
	for(i=0;i<n;i++) F[i][i]=1;
	
	for(k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			j=i+k;
			if(k==1&&s[i]==s[j]) F[i][j]=1;
			else if(s[i]==s[j])
			       F[i][j]=F[i+1][j-1];
			else F[i][j]=0;
			if(F[i][j]) kq=max(kq,j-i+1);
			}
		}
	return kq;
}
	
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<tinh(s)<<endl;
    }
    return 0;
}