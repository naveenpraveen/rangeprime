#include<stdio.h>
int main()
{
    int a[10],n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    for(j=0;j<n;j++)
    {
        printf("%d %d\n",a[j],j);
    }
    return 0;
}
