#include<stdio.h>
#include<math.h>
int main(){
    char a[30],b[30],i,count=0;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
            if(a[i]==b[i]){
                break;}
            else {
                count++;}
        }
if(count>1){
    printf("no");}
else{
    printf("yes");}
return 0;
}
