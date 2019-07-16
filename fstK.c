#include<stdio.h>
int main()
{
    char str[30];
    int i,K;
    scanf("%s",str);
    scanf("%d",&K);
    for(i=0;i<K;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
