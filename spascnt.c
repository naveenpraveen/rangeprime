#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,count=0;
char strs[30];
gets(strs);
  for(i=0;strs[i]!='\0';i++)
    {
        if(strs[i]==32)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
