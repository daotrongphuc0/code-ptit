#include <bits/stdc++.h>
using namespace std;
int n,m[1001];
int dem =0;
void chia(int l,int r)
{
    if(l==r) {
     return;
    }
    else {
        int x =(l+r) /2;
        if(m[x]==0) {
            dem += x-l;
            dem++;
            chia(x+1,r);
        }
        else chia(l,x);
    }
}
int main(){
    int t; cin >>t;
    while(t--)
    {
        cin >> n;
        for (int  i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        dem=0;
        chia(0,n);
        cout << dem<<endl;
    }
    return 0;
}
