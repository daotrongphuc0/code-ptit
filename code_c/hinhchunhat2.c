#include "stdio.h"
int main()
{
    int m,n;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <=n; i++)
    {
        
        int  x=i,y=i;
        for (int j = 0; j < m; j++)
        {
            printf("%d",x);
            if(y <=m-1) {x++;y++;}
            else {x--;y++;}
        }
        
        printf("\n");
    }
    
}