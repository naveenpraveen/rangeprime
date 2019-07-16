#include<stdio.h>
int main()
{
    int as,bs;
    scanf("%d %d",&as,&bs);
    as=as+bs;
    bs=as-bs;
    as=as-bs;
    printf("%d %d",as,bs);
    return 0;
}
