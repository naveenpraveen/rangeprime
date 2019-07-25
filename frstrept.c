#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,j;
scanf("%d",&n);
int a[n],m=n+1;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            if(m>j)
                m=j;
        }
    }
}
if(m<=n)
    printf("%d",a[m]);
else
    printf("unique");
return 0;
}
