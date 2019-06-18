#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
int t,start,end,temp,rem,Count=0,i;
float res=0;
scanf("%d %d",&start,&end);
for(i=start;i<end;i++){
temp=i;
Count=0;
while(temp!=0)
{
 temp=temp/10;
 Count++;
}
t=i;
res=0;
while(t!=0)
{
    rem=t%10;
    res=res+pow(rem,Count);
    t=t/10;
}
    if(res==i)
    {
        printf("%d ",res);
    }
    }
return 0;
}
