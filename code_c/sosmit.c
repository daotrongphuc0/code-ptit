#include "stdio.h"
#include "math.h"
int SUM(long int n)
{
    int ans =0;
    while(n!= 0)
    {
        ans += n%10;
        n/=10;
    }
    return ans;
}
int  phantich(long int n)
{
    if(n ==1) return 0;
    int ans=0;
    for (long int i = 2; i <= sqrt(n); i++)
    {
        while(n%i == 0 )
        {
            int a=SUM(i);
            ans +=a;
            n/=i;
        }
        
    }
    if(n!= 1) ans= ans + SUM(n);
    
    return ans;
}
int main()
{
    long int n;
    scanf("%li",&n);
   // if(n ==1) printf("NO");
  //  else 
    if(SUM(n) == phantich(n)) printf("YES");
    else printf("NO");
}