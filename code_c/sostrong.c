#include "stdio.h"
long int giaithua(int n)
{
    if(n<=1) return 1;
    else return n*giaithua(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int tong =0;
    if(n ==0) printf("0");
    else 
    {
        int ans =n;
        while(n!= 0)
        {
            int x =n%10;
            tong += giaithua(x);
            n/=10;
        }
        if(tong == ans) printf("1");
        else printf("0");
    }
}