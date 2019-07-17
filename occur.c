#include<stdio.h>
#include<string.h>
int main(){
    int i=0,a,n,cnt=0,k;
    scanf("%d",&a);
    scanf("%d",&k);
    while(a!=0)
    {
        i=a%10;
        a=a/10;
        if(i==k)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
