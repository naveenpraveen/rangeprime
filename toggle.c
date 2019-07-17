#include<stdio.h>
#include<string.h>
int main(){
    char a[30];
    int i,n;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else
        {
            a[i]=a[i]-32;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
