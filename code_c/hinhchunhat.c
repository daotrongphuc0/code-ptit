#include "stdio.h"
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=0 || b<=0) printf("0");
    else 
    {
    int chuvi = 2*(a+b);
    int dientich = a*b;
    printf("%d %d",chuvi,dientich);
    }
}