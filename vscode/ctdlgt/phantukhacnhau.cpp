#include <bits/stdc++.h>
using namespace std;
int vt =-1;
int tim(long long m1[],long long m2[],int l,int r)
{
    if(l == r ) return  l;
    int g =(l+r) /2;
    if(m1[g] != m2[g]) return  tim(m1,m2,l,g);
    else return tim(m1,m2,g+1,r);
    //return  -1;
}
int main(){
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long m1[n+2],m2[n+2];
        for (int  i = 0; i < n; i++)
        {
            cin >> m1[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            cin >> m2[i];
        }
        m2[n-1] = -1;
        vt =-1;
        if(m1[n-2] == m2[n-2]) cout << n<<endl;
        else { 
        vt = tim(m1,m2,0,n-1);
        cout << vt+1<<endl;
       }
        

    }
    return 0;
}
