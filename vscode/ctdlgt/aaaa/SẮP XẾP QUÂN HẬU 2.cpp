#include<bits/stdc++.h>
using namespace std;
int a[9][9],COT[30],XUOI[30],NGUOC[30],m[9];
int res=0;

void Init(){
	for(int i=1;i<=8;i++)
	   for(int j=1;j<=8;j++)  cin>>a[i][j];
	for(int i=1;i<=8;i++) COT[i]=1;
	for(int i=1;i<2*8;i++){
		XUOI[i]=1;
		NGUOC[i]=1;
		}
}
void Try(int i){
	for(int j=1;j<=8;j++){
		if(COT[j] && XUOI[i-j+8] && NGUOC[i+j-1]){
			m[i]=j;
			COT[j]=0;
			XUOI[i-j+8]=0;
			NGUOC[i+j-1]=0;
			if(i==8){
				int ans = 0;
				for(int l=1;l<=8;l++)
				    ans+=a[l][m[l]];
				res=max(ans,res);
				}
			else {
			    Try(i+1);
			}
			COT[j]=1;
			XUOI[i-j+8]=1;
			NGUOC[i+j-1]=1;
			}
		}
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		res=0;
		Init();
		Try(1);
		cout<<res<<"\n";
		}
	return 0;
	}