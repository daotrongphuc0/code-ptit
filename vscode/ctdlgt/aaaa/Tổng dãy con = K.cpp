#include<bits/stdc++.h>
using namespace std;
int sum = 0, d=0,n,k;
vector<vector<int> >res;
vector<int>b;
vector<bool>used;
void output(){
	for(int i=res.size();i>=0;i--){
		for(int j=0;j<res[i].size();j++){
			cout<<res[i][j]<<" ";
			}
		cout<<"\n";
	    }
	}
void Try(int i,vector<int>a, int k){
	for(int j=i;j<a.size();j++){
		if(!used[j]){
			sum+=a[j];
			b.push_back(a[j]);
			if(sum==k){
				res.push_back(b);
				d++;
				}
			else if(sum<k){
				Try(j+1,a,k);
				}
			sum-=a[j];
			b.pop_back();
			}
		}
	}

int main(){
	cin>>n>>k;
	used.resize(n);
	vector<int>a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end());
	Try(0,a,k);
	output();
	cout<<d<<endl;
	}