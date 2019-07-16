#include <stdio.h>
int main()
{
int n,rev,rem,i,a[20],count=0;
scanf("%d",&n);
    for(i=0;n!=0;i++)
    {
    a[i]=n%10;
    n=n/10;
    count++;
}
for(i=count;i>0;i--)
{
    printf("%d ",a[i-1]);
    }
    return 0;
}
