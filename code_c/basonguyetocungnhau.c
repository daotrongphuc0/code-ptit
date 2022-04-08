#include "stdio.h"
int ucln(int a,int b){
    while(a*b!=0){
        if(a>b) a%=b;
        else b%=a;
    }
    return a+b;
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    for (int i = x; i <y-2; i++)
    {
        for (int j = i+1; j <y-1; j++)
        {
            if(ucln(i,j) ==1){
                for (int  k = j+1; k <y; k++)
                {
                    if(ucln(i,k)*ucln(j,k)==1) printf("(%d, %d, %d)\n",i,j,k);
                }
                
            }
        }
        
    }
    
}