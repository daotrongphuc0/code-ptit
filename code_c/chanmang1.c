#include "stdio.h"
int mi(int a,int b)
{
    if(a>b) return b;
    return a;
}
int main ()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(int i =0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i =0;i<m;i++)
    scanf("%d",&b[i]);
    int vt;
    scanf("%d",&vt);
    for(int i=0;i<mi(n,vt);i++)
    printf("%d ",a[i]);
    for (int i = 0; i < m; i++)
    {
        printf("%d ",b[i]);
    }
    for (int i = mi(n,vt); i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}