#include<stdio.h>
#include<string.h>
int main()
{
    char str[40],n,j;
 scanf("%s",str);
 n=strlen(str);
    for(j=n-1;j>=0;j--)
        {
    printf("%c",str[j]);
    }
return 0;
}
