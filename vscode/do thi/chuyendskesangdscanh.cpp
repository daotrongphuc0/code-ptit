#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<vector<int> >a;
    a.resize(n+2);
    for(int i=1;i<=n;i++){
        string s;
        getline(cin,s);
        istringstream is(s);
        int k;
        while(is>>k){
            a[i].push_back(k);
        }
    }
        for(int i=1;i<=n;i++){
            for(int j=0;j<a[i].size();j++){
                if(i<a[i][j]) cout<<i<<" "<<a[i][j]<<"\n";
            }
        }
    return 0;
}