#include "stdio.h"
#include "math.h"
int sont(int n)
{
    if(n<=1) return 0;
    for (int i = 2; i*i <=n; i++)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}
int sodep(int a,int b)
{
    for (int i = a; i <=b; i++)
    {
        int kt =0;
        for (int j = 2; j <= i; j++)
        {
            if( sont(j) == 1 )
            {
                if(i % j ==0)
                {
                    if(i%(j*j) == 0) kt=1;
                    else{kt =0;break;}
                }
            }
           
        }
        if(kt ==1) printf("%d ",i);
    }
    
}
int main()
{
    int a ,b;
    scanf("%d%d",&a,&b);
    sodep(a,b);
}