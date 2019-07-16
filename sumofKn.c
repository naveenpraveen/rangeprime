#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,tot=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        tot=tot+i;
    }
    printf("%d",tot);
    return 0;
}
