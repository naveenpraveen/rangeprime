#include <stdio.h>
int main()
{
    int i,n,ans=1;
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        ans=n*i;
        printf("%d ",ans);
    }
    return 0;
}
