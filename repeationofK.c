#include<stdio.h>
int main()
{
    int N,K,n,i,a[10],count=0;;
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
    if(K==a[i]){
        count++;
        }
}
printf("%d",count);
return 0;
}
