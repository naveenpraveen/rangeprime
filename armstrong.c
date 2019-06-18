#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
int t,n,temp,rem,Count=0;
float res=0;
scanf("%d",&n);
temp=n;
while(temp!=0){
    temp=temp/10;
Count++;
}
t=n;
while(t!=0)
{
    rem=t%10;
    res=res+pow(rem,Count);
    t=t/10;}
if(res==n){
    printf("yes");}
    else
        printf("no");
return 0;
}
