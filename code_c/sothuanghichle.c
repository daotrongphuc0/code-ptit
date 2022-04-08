#include "stdio.h"
int istrue(long long int n)
{
    if(n== 0)return 0;
    int mang[20];
    int dem=0;
    while(n!=0)
    {
        mang[dem] = n%10;
        n/=10;
        dem++;
    }
    if(dem%2 == 0) return 0;
    int i=0,j=dem-1;
    int tong =0;
    while(i<j)
    {
        if(mang[i] != mang[j]) return 0;
        if(mang[i]%2 ==0) return 0;
        tong += 2*mang[i];
        i++;
        j--;
    }
    tong += mang[i];
    if(tong %2 ==1) return 1;
    return 0;

}
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lli",&n);
        if(istrue(n)) printf("YES\n");
        else printf("NO\n");
    }
}