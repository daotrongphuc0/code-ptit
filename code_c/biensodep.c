#include "stdio.h"  
#include "string.h"
int main()
{
    int t;
    scanf("%d",&t);
    fflush(stdin);
    while(t--)
    {
        int mang [10];
        char m[50];
        gets(m);
        mang[0] = (int)m[6]-48;
        mang[1] = (int)m[7]-48;
        mang[2] = (int)m[8]-48;
        mang[3] = (int)m[10]-48;
        mang[4] = (int)m[11]-48;
        int ok1=1;
        for (int  i = 0; i < 4; i++)
        {
            if(mang[i] >= mang[i+1]) {ok1=0;break;}
        }
        int ok2=0;
        for (int i = 0; i < 5; i++)
        {
          //  printf("%d ",mang[i]);
            if(mang[i] == 6 || mang[i] ==8) {ok2 =1;}
            else {ok2 =0;break;}
        }
        int ok =0;
        if(mang[0] == mang[1] && mang[1] == mang[2] && mang[3] ==mang[4]) ok=1;        
        if(ok1 || ok2 || ok) printf("YES\n");
        else printf("NO\n");
    }
}
