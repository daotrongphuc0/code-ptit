#include <stdio.h>
#include <math.h>
int  kt(int a)
{
    if(a<2) return 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if(a%i==0) return 0;
    }
    return 1;
}
void main()
{
    int n;
    scanf("%d",&n);
    int m[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&m[i]);
    }
    int dem =0;
    for (int i = 0; i < n; i++)
    {
        if(kt(m[i]) == 1) dem++;
    }
    printf("%d ",dem );
    for (int i = 0; i < n; i++)
    {
        if(kt(m[i]) == 1) printf("%d ",m[i]);
    }
    
}