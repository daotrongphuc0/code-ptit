#include "stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    printf("@\n");
    int x =1;
    for (int i = 1; i <n; i++)
    {
        printf("@");
        int y = 66;
        for (int j = 0; j < x/2; j++)
        {
            printf("%c",(char)y);
            y+=2;
        }
        for (int j = x/2; j >= 0; j--)
        {
            printf("%c",(char)y);
            y-=2;
        }
        printf("@\n");
        x+=2;
    }
    
}