#include "stdio.h"
#include "math.h"
int main()
{
    int n;
    scanf("%d",&n);
    int tong =1;
    for (int i = 2; i <n; i++)
    {
        if(n%i==0) tong +=i;
    }
    if(tong == n) printf("1");
    else printf("0");
}