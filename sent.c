#include<stdio.h>
int main()
{
int i,count=1;
char str[30];
gets(str);
  for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==46)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
