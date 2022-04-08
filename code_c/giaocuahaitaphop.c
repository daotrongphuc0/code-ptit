#include "stdio.h"
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int manga[a],mangb[b];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&manga[i]);
    }
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&mangb[i]);
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if(manga[i]== mangb[j]) {
                printf("%d ",manga[i]);
                break;
            }
        }
        
    }
    
    
}