#include<stdio.h>
int main(){
    int n,i,j,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        if(a[j]==j){
            printf("%d ",j);
        }
        else
            flag++;
    }
    if(flag==n)
        {
            printf("-1");
    }
    return 0;
}
