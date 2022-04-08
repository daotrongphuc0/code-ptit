#include "stdio.h"
int mi(int a,int b)
{
    if(a>b) return b;
    return a;

}
int ma(int a,int b)
{
    if(a>b) return a;
    return b;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char mang[21] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','\0'};
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < mi(i,mi(m,n)); j++)
        {
            printf("%c",mang[ma(m,n)-j-1]);
        }
        for (; j < m; j++)
        {
            printf("%c",mang[ma(m,n)-i-1]);
        }
        printf("\n");
    }
}

    