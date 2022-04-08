#include "stdio.h"
#include "math.h"
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0){
        int soans=0;
    for (int i = pow(10,n-1); i < pow(10,n); i++)
    {
        int dem =0;
        while(i!=0)
        {
            if(i%2==0)dem++;
            i/=10;
        }
        if(dem==n/2) {
            printf("%d ",i);soans++;
            if(soans %10==0) printf("\n");
        }
    }
    
        
    }

}