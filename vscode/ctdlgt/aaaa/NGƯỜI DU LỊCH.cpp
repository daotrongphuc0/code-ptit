#include<bits/stdc++.h> 
using namespace std;
int n,a[15][15],check[15]={},m=1000000000;
void test(int tong,int bd,int dem){
	if(dem<n-1&&tong<m){
		for(int i=1;i<n;i++){
			if(check[i]==0){
				check[i]=1;
				test(tong+a[bd][i],i,dem+1);
				check[i]=0;
			}
		}
	}
	else m=min(m,tong+a[bd][0]);
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	test(0,0,0);
	cout<<m;
}