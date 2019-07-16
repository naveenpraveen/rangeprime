#include<stdio.h>
int main()
{
    int as,bs,temp;
    scanf("%d %d",&as,&bs);
    temp=as;
    as=bs;
    bs=temp;
    printf("%d %d",as,bs);
    return 0;
}
