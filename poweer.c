#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,res=1,i;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
        res=a*res;
        printf("%d",res);
        return 0;
}
