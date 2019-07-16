#include<stdio.h>
int main()
{
    int n,c;
    int i,coun=0;
    scanf("%d",&n);
    while(n!=0){
            c=n%10;
          n=n/10;
        if(c!=1&&c!=0){
            coun++;
        }
        else
            break;
    }
    if(coun!=0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
