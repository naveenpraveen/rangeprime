#include<stdio.h>
int main(){
int n,d,e;
scanf("%d",&n);
int a[n],s,c=0;
s=(n*(n-1))*0.5;
for(d=0;d<n;d++)
    scanf("%d",&a[d]);
for(d=0;d<n;d++){
    for(e=d+1;e<n;e++){
        if(a[d]==a[e]){
            c=c+e+d;
        }
    }
}
printf("%d",a[s-c]);
return 0;
}
