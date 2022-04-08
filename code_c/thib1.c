#include "stdio.h"
#include "math.h"
int isnt(long int n)
{
    if(n<= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i ==0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int m[n+2][n+2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%li",&m[i][j]);
        }
        
    }
    int dem =0;
    for (int i = 0; i < n; i++)
    {
        if(isnt(m[i][i]) == 1) dem++;
        if(isnt(m[i][n-1-i]) == 1) dem++;   
    }
    if(n%2==1) 
    {
        int x =n/2;
        if( isnt(m[x][x]) == 1 ) dem--;
    }
    printf("%d",dem);
}