#include "stdio.h"
int main()
{
    long long n;
    scanf("%d",&n);
    int sc=0,sl=0;
    while(n!= 0)
    {
        int x = n%10;
        if(x%2==0) sc++;
        else sl++;
        n/=10;
    }
    printf("%d %d",sl,sc);
    return 0;
}