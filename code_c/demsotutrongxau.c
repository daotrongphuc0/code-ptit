#include "stdio.h"  
#include "string.h"
int main()
{
    int t;
    scanf("%d",&t);
    fflush(stdin);
    while(t--)
    {
        char m [205];
        gets(m);
        int dem =0;
        char chr[2] = " ";
        strcat(m,chr);
        //m[strlen(m)-1] = chr;
        //m[strlen(m)] = '\0';
        for (int i = 1; i < strlen(m); i++)
        {
            if(m[i] == chr[0] && m[i-1] != chr[0]) dem++;
           // if(m[i] != chr) ok=1;
        }
        //if(ok) dem++;
        printf("%d\n",dem);
    }
}