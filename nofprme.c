#include<stdio.h>
#include<math.h>
int main(){
int i,j,l,k,count=0,c=0;
scanf("%d %d",&l,&k);
for(i=l;i<=k;i++)
{
    count=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            {
        count++;
        break;
        }
    }
    if(count==0)
    {
    c=c+1;
    }
    }
    printf("%d",c);
return 0;
}
