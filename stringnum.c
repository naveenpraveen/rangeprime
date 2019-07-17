#include<stdio.h>
#include<string.h>
int main(){
    char a[30];
    int i,count=0,n;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
         count++;
        }
    }
    if(count==n)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
