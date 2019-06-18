#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
int a,b,fac;
scanf("%d %d",&a,&b);
for(int j=a;j<=b;j++){
        fac=1;                            //prime numbers btween 2 numbers
for(int i=2;i<=j-1;i++){
    if(j%i==0){
        fac=0;
        break;}
}
if(fac==1)
    {
        if(j!=1)
        {
            printf("%d ",j);
}
}
}
return 0;
}
