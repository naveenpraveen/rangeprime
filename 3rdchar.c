#include<stdio.h>
#include<string.h>
int main(){
    char a[40];
    int i,n;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(i==0||i%3==0)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
