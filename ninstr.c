#include<stdio.h>
int main()
{
int i,count=0;
char str[30];
scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
