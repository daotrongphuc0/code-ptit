#include <bits/stdc++.h>
using namespace std;
struct so {
    int s;
    int dem =0;
};
void Sort(int m[],int l,int x,int r)
{
    int n1= x-l+1,n2=r-x;
    int A[n1+1],B[n2+1];
    for (int i = 0; i < n1; i++)
    {
        A[i] = m[i+l];
    }
    for (int i = 0; i < n2; i++)
    {
        B[i] = m[i+x+1];
    }
    int i=0,j=0;
    int dem =l;
    while(i<n1&&j<n2)
    {
        if(A[i]<=B[j])
        {
            m[dem] =A[i];
            dem++;i++;
        }
        else {
            m[dem] =B[j];
            j++;
            dem ++;
        }
    }
    while(i<n1)
    {
        m[dem] =A[i];
        i++;
        dem++;
    }
    while(j<n2)
    {
        m[dem] =B[j];
        j++;dem++;
    }
    
    
}
void merge_sort(int m[],int l,int r)
{
    if(l==r) return ;
    int x =(l+r)/2;
    merge_sort(m,l,x);
    merge_sort(m,x+1,r);
    Sort(m,l,x,r);
}
int main(){
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        merge_sort(m,0,n-1);
        for (int i = 0; i < n; i++)
        {
            cout << m[i] <<" ";
        }
        cout <<endl;
        int a=0;
        so kq[n+2];kq[0].s =m[0];kq[0].dem++;
        for (int i = 1; i < n; i++)
        {
            if(m[i] ==m[i-1]) {
                kq[a].dem++;
            }
            else {
                a++;
                kq[a].s =m[i];
                kq[a].dem++;
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int  i = 0; i < kq[i].dem; i++)
            {
                cout << kq[i].s << " ";
            }
            
        }
        cout <<endl;
        
    }
    return 0;
}
