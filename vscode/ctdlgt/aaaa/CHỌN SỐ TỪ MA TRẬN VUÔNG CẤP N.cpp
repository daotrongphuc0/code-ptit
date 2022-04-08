#include <bits/stdc++.h>
using namespace std;

int n,k,a[20][20],sum=0,dem=0;
vector<int>res;
vector<vector<int> >resss;
bool cot[20];
void Try(int i){
    for(int j=0;j<n;j++){
        if(cot[j]==false){
            sum+=a[i][j];
            cot[j]=true;
            res.push_back(j);
            if(sum==k&&i==n-1){
                dem++;
                resss.push_back(res);
            }
            else if(sum<k) Try(i+1);
            sum-=a[i][j];
            cot[j]=false;
            res.pop_back();
        }
    }
}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cot[i]=false;
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    Try(0);
    cout<<dem<<"\n";
    for(int i=0;i<resss.size();i++){
        for(int j=0;j<resss[i].size();j++){
            cout<<resss[i][j]+1<<" ";
        }
        cout<<"\n";
    }
}