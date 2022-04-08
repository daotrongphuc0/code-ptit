#include "stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    int diemdau =1;
    for (int i = 1; i <=n; i++)
    {
        int dem= 0;
        for (int j = 1; j < i; j++)
        {
            printf("    ");
            dem++;
        }
        int x = diemdau;
        for (int j = i; j <=n; j++)
        {
            x+= dem;
            printf("%4d",x);
            dem++;
        }
        diemdau += i;
        printf("\n");
    }
    
}