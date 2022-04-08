#include<bits/stdc++.h>
using namespace std;
int dem,sum;
vector<int> a;
vector<int> s;
vector<vector<int> >resss;

void output(){
    cout<<dem<<"\n";
    for(int i=0;i<resss.size();i++){
        cout<<"(";
        for(int j=0;j<resss[i].size()-1;j++){
            cout<<resss[i][j]<<" ";
        }
        cout<<resss[i][resss[i].size()-1]<<")"<<" ";
    }
}


void Try(int x,int n){
    for(int j=0;j<a.size();j++){
        if(s.empty()||a[j] <= s[s.size()-1]){
            sum+=a[j];
            s.push_back(a[j]);
            if(sum == n){
                dem++;
                resss.push_back(s);
            }
            else if(sum < n) Try(x+1,n);
            sum-=a[j];
            s.pop_back();
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        dem=0; sum=0;
        s.clear();s.resize(0);
        a.clear();resss.clear();
        for(int i=n;i>0;i--) a.push_back(i);
        Try(0,n);
        output();
        cout<<"\n";
    }
}