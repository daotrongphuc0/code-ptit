#include "stdio.h"
#include "math.h"
int isnt(int n)
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
    int a,b;
    scanf("%d%d",&a,&b);
    for (int i = a; i <=b; i++)
    {
        if(isnt(i) ==1)
        {
            int ok =1;
        int sum  =0;
        int n=i;
        while(n!=0)
        {
            sum+= n%10;
            int x = n%10;
            if(isnt(x) ==0) {ok =0;break;}
            n/=10;
        }
        
        if((isnt(sum) == 1) && (ok ==1 ))printf("%d ",i);
        }
        
    }
    
}