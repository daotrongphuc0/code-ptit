#include "stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    int m[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&m[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(m[i] < m[j]) { int tmp =m[i];m[i] = m[j];m[j] = tmp;}
        }
        
    }
    printf("%d ",m[0]);
    for (int i = 1; i < n; i++)
    {
        if(m[i] != m[0]) {printf("%d ",m[i]);break;}
    }
    
}