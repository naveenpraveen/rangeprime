#include<stdio.h>
#include<math.h>
int main(){
    char a[30],b[30];
    int i,cout=0,k,n;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%d",&k);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
            if(a[i]!=b[i])
                cout++;
        }
if(cout==k){
    printf("yes");}
else{
    printf("no");}
return 0;
}
