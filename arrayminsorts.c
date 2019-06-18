#include<stdio.h>
int main()
{
    int a[10],n,b,d,t;
    scanf("%d\n",&n);
    for(b=0;b<n;b++)
    {
        scanf("%d",&a[b]);
    }
    for(b=0;b<n;b++)
    {
        for(d=0;d<n;d++)
        {
         if(a[b]<a[d])
         {
            t=a[b];
            a[b]=a[d];
            a[d]=t;
         }   
        }
    } 
    for(b=0;b<n;b++)
    {
        printf("%d ",a[b]);
    }
    return 0;
}
