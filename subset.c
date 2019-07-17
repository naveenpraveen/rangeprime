#include<stdio.h>
int main(){
int n,m,c,d;
scanf("%d",&n);
scanf("%d",&m);
int a[n],b[m],s=0;
if(n<m)
    printf("NO");
else{
for(c=0;c<n;c++)
    scanf("%d",&a[c]);
for(c=0;c<m;c++)
    scanf("%d",&b[c]);
for(c=0;c<m;c++){
    for(d=0;d<n;d++){
        if(b[c]==a[d]){
            s=s+1;
        }
    }
}
if(s==m)
    printf("YES");
else
    printf("NO");
}
return 0;
}
