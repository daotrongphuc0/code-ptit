#include "stdio.h"
int main()
{
    long int n;
    scanf("%li",&n);
    int tong =0;
    if(n!=0) tong=1;
    while(n != 0){
        int socuoi=n%10;
        tong *= socuoi;
        n/= 10;
    }
    printf("%d",tong);
}