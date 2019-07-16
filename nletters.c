#include<stdio.h>
int main()
{
int i,count=0;
char str[30];
gets(str);
  for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=32)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
