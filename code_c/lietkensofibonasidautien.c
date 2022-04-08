#include "stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    long int dem=2,s0=0,s1=1;
    printf("%d ",s0);
    if(n >= 2) printf("%li ",s1);
    for (int i = 3; i <= n; i++)
    {
        printf("%li ",s0+s1);
        int tmp =s0;
        s0= s1;
        s1 +=tmp;
    }
    
}