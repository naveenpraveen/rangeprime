#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    printf("%d %d",a[0],a[n-1]);
    return 0;
}
