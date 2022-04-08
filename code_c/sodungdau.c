#include "stdio.h"

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int m[n],kt[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&m[i]);
            kt[i] = 0;
        }
        kt[n-1] =1;
        int chuan =n-1;
        for (int i = n-2; i >= 0;  i--)
        {
            int j;
            int ok =1;
            for (j = i+1; j < chuan; j++)
            {
                if(m[j] >= m[i] ) 
                {
                    ok =0;
                    break;
                }
            }
            if((ok ==1 )&& (m[i] > m[chuan])) {kt[i] =1;chuan=i;} 
            
        }
        for (int i = 0; i < n; i++)
        {
            if(kt[i] ==1) printf("%d ",m[i]);
        }
        printf("\n");
    }
}