#include <bits/stdc++.h>
using namespace std;
void timso(int n){
    int sothoat=1;
    for (int i = 4; i <=n; i++)
    {   if(sothoat !=1)
           if(i%sothoat == 0) continue;
        int dem =0;
        for (int j = 2; j < i; j++)
        {
            if(i%j == 0) dem ++;
            if(dem>1) break;
        }
        if(dem ==1){ cout<<i<<" ";   sothoat = i;}
    }
    cout<<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        timso(n);
    }
    return 0;
}
