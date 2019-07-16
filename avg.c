#include<stdio.h>
int main()
{
    int n,i,s=0,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b);
        s=s+b;
    }
    a=s/n;
    printf("%d",a);
    return 0;
}
