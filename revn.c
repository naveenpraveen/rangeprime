#include<stdio.h>
#include<math.h>
int main()
{
    int rev,n,rem,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
