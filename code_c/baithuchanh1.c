#include "stdio.h"
int isnt(long int n)
{
    if(n<= 1) return 0;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i ==0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int m[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&m[i][j]);
        }
        
    }
    int j = n-1;
    int tong =0;
    for (int  i = 0; i < n; i++,j--)
    {
        if(isnt(m[i][i]) ==1)  tong += m[i][i];
        if(isnt(m[i][j]) ==1)  tong += m[i][j];
    }
    if(n%2!=0) tong -= m[n/2][n/2];
    printf("%d",tong);

    
}