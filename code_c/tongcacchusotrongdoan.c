#include "stdio.h"
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b) {
        int tmp =a;a=b;b=tmp;
    }
    long int tong=0;
    for (int i = a; i <=b; i++)
    {
        tong +=i;
    }
    printf("%li",tong);
}