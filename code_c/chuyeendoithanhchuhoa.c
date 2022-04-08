#include "stdio.h"
#include "string.h"
int main()
{
    char m[105];
    gets(m);
    //strupr(m);
    for (int i = 0; i < strlen(m); i++)
    {
        if((int)m[i]>=97 && (int)m[i] <=122) printf("%c",(char)m[i] - 32);
        else printf("%c",m[i]);

    }
    
}