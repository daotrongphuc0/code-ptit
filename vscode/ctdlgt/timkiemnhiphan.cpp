#include <bits/stdc++.h>
using namespace std;
int tim(int m[],int l,int r,int k)
{
    if(l ==r ) return l;
    int g =(l+r)/2;
    if(m[g] < k) return tim(m,g+1,r,k);
    else return tim(m,l,g,k);
}
int main(){
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int k; cin >> k;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }

        int vt = tim(m,0,n,k);
        if(m[vt] == k) cout << vt+1<<endl;
        else cout << "NO"<<endl;
    }
    return 0;
}
