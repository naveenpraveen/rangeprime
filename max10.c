#include<stdio.h>
int main()
{
    int i,j,temp,a[30],n=10;
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
    printf("%d",a[n-1]);
    return 0;
}
