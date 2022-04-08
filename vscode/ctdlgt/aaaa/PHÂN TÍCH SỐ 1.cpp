#include<bits/stdc++.h>
using namespace std;

int sum=0,n;
vector<int>s;
vector<int>a;
void xuat(){
	cout<<"(";
	for(int i=0;i<s.size();i++){
		if(i==s.size()-1) cout<<s[s.size()-1]<<")";
		else cout<<s[i]<<" ";
		}
	cout<<" ";
	}
void Try(int i){
	for(int j=0;j<a.size();j++){
		if(s.empty()||a[j]<=s[s.size()-1]){
			sum+=a[j];
			s.push_back(a[j]);
			if(sum == n) xuat();
			else if(sum < n)
			Try(i+1);
			sum -= a[j];
			s.pop_back();
			}
		}
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		sum = 0;
		a.clear();
		s.clear();
		s.resize(0);
		for(int i=n;i>0;i--) a.push_back(i);
		Try(0);
		cout<<endl;
		}
	}