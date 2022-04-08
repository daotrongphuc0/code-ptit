#include<bits/stdc++.h>
#define MAX 300
using namespace std;
int sum = 0,dem = 0;
vector<int>a,b;
vector<vector<int> >res;
vector<bool>used;

bool check(int x){
	if(x<2) return false;
	if(x==2) return true;
	for(int i=2;i*i<=x;i++)
	    if(x%i==0) return false;
	return true;
}
void output()
{
	for(int i=0;i<res.size();i++)
	{
	   for(int j=0;j<res[i].size();j++)
	    {
	      cout<<res[i][j]<<" ";
	    }
	    cout<<"\n";
    }
}
void Try(int i,int n,int s)
{
	for(int j=i;j<a.size();j++)
	{
		    sum+=a[j];
		    used[j]=true;
		    b.push_back(a[j]);
		    if((sum==s)&&(n==b.size()))
		    {
			    dem++;
			    res.push_back(b);
		    }
		    else if(sum<s) Try(j+1,n,s);
		    sum-=a[j];
		    used[j]=false;
		    b.pop_back();
	    }
    }


int main(){
	int t;
	cin>>t;
	while(t--){
		dem = 0; sum = 0;
		b.clear();
		res.clear();
		a.clear();
		int n,p,s;
		cin>>n>>p>>s;
		for(int i=p+1;i<=s;i++)
		    if(check(i)==true) a.push_back(i);
		used.clear();
		used.resize(a.size());
		fill(used.begin(),used.end(),false);
		Try(0,n,s);
		cout<<dem<<endl;
		output();
	}
}