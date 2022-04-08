#include "stdio.h"

int main()
{
    int t;
    scanf("%d",&t);
    int nam = t/365;
    int x = t%365;
    printf("%d %d %d",nam,x/7,x%7);
}