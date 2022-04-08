#include<bits/stdc++.h>
using namespace std;
int n,s[100],i;
void print()
{
	for(int j=1;j<=n;j++) cout<<s[j]<<" ";
	cout<<"\n";
}
bool check()
{
	for(int i=1;i<=n/2;i++)
	    if(s[i]!=s[n-i+1]) return false;
	return true;
}
void gent(int i)
{
	for(int j=0;j<=1;j++)
	{
		s[i]=j;
		if(i==n)
		{
		 if(check()) print();
		}
		else gent(i+1);
	} 
	return;
}
			
	
int main(){
	cin>>n;
	gent(1);
	return 0;
	}