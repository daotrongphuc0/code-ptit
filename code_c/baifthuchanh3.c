#include "stdio.h"

int main ()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    int tong =0,vt=0;
    for (int i = 0; i < n; i++)
    {
        int  xet =0;
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
            xet+=a[i][j];
        }
        if(xet >=tong) {tong =xet;vt = i;}
    }
    for (int i = 0; i < m; i++)
    {
        int tmp = a[vt][i];a[vt][i] =a[n-1][i];a[n-1][i] =tmp;
    }
    
    tong =0;
    vt =0;
    for (int i = 0; i < m; i++)
    {
        int xet =0;
        for (int j = 0; j < n-1; j++)
        {
            xet += a[j][i];
        }
        if(xet >=tong) {tong =xet;vt = i;}
    }
    for (int i = 0; i < m; i++)
    {
        int tmp = a[i][vt];a[i][vt] =a[i][m-1];a[i][m-1] =tmp;
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
    
    
    
    