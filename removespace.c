#include<stdio.h>
#include<string.h>
int main(){
    char a[40];
    int n,i;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]!=' ')
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
