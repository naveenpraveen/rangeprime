#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && (i+1)%2==0)
        {
            printf("%d ",a[i]);
        }
        if((a[i]%2!=0) &&((i+1)%2!=0))
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
