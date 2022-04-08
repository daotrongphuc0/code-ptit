#include<bits/stdc++.h>
using namespace std;

int sum,dem;
vector<int>a;
vector<int>s;

void output(){
    if(!s.empty()){
        cout<<"[";
        for(int i=0;i<s.size()-1;i++){
            cout<<s[i]<<" ";
        }
        cout<<s[s.size()-1]<<"]";
    }
}

void Try(int i,int k){
    for(int j=0;j<a.size();j++){
        if(s.empty()||a[j]>=s[s.size()-1]){
            sum+=a[j];
            s.push_back(a[j]);
            if(sum==k){
                dem++;
                output();
            }
            else if(sum < k) Try(i+1,k);
            sum-=a[j];
            s.pop_back();
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        sum = 0; dem = 0;
        int n,k;
        cin>>n>>k;
        a.clear(); a.resize(n);
        s.clear(); s.resize(0);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        Try(0,k);
        if(dem==0) cout<<-1;
        cout<<endl;
    }
}