#include<stdio.h>
#include<string.h>
int main(){
    char a[30];
    int cnt=0,cot=0,i,n;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='(')
        {
            cnt++;
        }
        else
        {
            cot++;
        }
        }
        if(cnt==cot)
        {
            printf("yes");
        }
        else{
            printf("no");
    }
    return 0;
    }
