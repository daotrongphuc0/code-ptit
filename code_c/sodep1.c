#include <stdio.h>
#include <math.h>
int  kt(int a)
{
    if(a<2) return 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if(a%i==0) return 0;
    }
    return 1;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){int tmp =a;a=b;b=tmp;}
    int mang[6] ={1,2,3,5,8,13};
    for (int i = a; i <=b; i++)
    {
        if(kt(i) ==1)
        {
            int tong =0;
            int x =i;
            while(x!=0)
            {
                tong += x%10;
                x/=10;
            }
            for (int j = 0; j < 6; j++)
            {
                if(tong == mang[j]) printf("%d ",i);
            }
            
        }
    }
    
    
}