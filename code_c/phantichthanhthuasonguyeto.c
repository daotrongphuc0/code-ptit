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
void phantich(long int n)
{
    if(n ==1) printf("1");
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(isnt(i))
        while(n%i == 0 )
        {
            printf("%d ",i);
            n/=i;
        }
        
    }
    if(n!= 1) printf("%li",n);
    printf("\n");
    
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%li",&n);
        phantich(n);
    }
}