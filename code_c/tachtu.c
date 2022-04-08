#include "stdio.h"  
#include "string.h"
int main()
{
    char m[105];
    gets(m);
    int so=0,chu=0,khac=0;
    for (int  i = 0; i < strlen(m); i++)
    {
        if(((char)m[i] >=97 && (char)m[i]<= 122) || ((char)m[i] >=65 && (char)m[i] <= 90)) chu++;
        else if((char)m[i] >= 48 && (char)m[i] <= 57) so++;
        else khac++;
    }
    printf("%d %d %d",chu,so,khac);
}