#include "stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++)
    {
        int x =i+64;
        int y =n-1;
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",(char)x);
            x += y;
            y--;

        }
        printf("\n");
    }
    
}