#include "stdio.h"
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("~");
        }
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}