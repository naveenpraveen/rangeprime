#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,temp,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(cnt==0 && (a[i]+a[j]==0||a[i]+a[j]==1||a[i]+a[j]==-1))
            {
            printf("%d %d",a[i],a[j]);
            cnt=cnt+1;
            }
        }
    }
    return 0;
}
