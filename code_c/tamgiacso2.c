#include "stdio.h" 
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if(i%2==1)
        {
            int x =1;
            for (int j = 0; j < i; j++)
            {
                printf("%d",x%10);
                x+=2;
            }
            printf("\n");
        }
        else 
        {
            int x =2;
            for (int j = 0; j < i; j++)
            {
                //if(x %10 == 0) x+=2;
                printf("%d",x%10);
                x+=2;
            }
            printf("\n");
        }
    }
    
}