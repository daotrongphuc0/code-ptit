#include <bits/stdc++.h>
using namespace std;
void gop(int m[],int l,int x,int r)
{
    int L[x-l+1],R[r-x];
    for (int i = 0; i < x-l+1; i++)
    {
        L[i] =m[l+i];
    }
    for (int i = 0; i < r-x; i++)
    {
        R[i]=m[x+i+1];
    }
    int i=0,j=0,n1=x-l+1,n2=r-x;
    int dem=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            m[dem] = L[i];
            i++;
            dem++;
        }
        else{
            m[dem] =R[j];
            j++;
            dem++;
        }
    }
    while(i<n1)
    {
        m[dem] =L[i];
        i++;
        dem++;
    }
    while(j<n2)
    {
        m[dem] =R[j];
        j++;
        dem++;
    }
}
void mergersort(int m[],int l,int r)
{
    if(l==r) return ;
    int x=l+(r-l)/2;
    mergersort(m,l,x);
    mergersort(m,x+1,r);
    gop(m,l,x,r);
}
int main(){
    int t; cin >>t;
    while(t--)
    {
        int n;cin>> n;
        int m[n];
        for (int  i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        mergersort(m,0,n-1);
        for (int i = 0; i < n; i++)
        {
            cout <<m[i]<< " ";
        }
        cout <<endl;
        
        
    }
    return 0;
}
