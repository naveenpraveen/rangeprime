#include <stdio.h>
 int main()
{
  int n,f=1,s=1,next,c;
  scanf("%d",&n);
  for (c =0;c<n;c++)
  {
      printf("%d ",f);
      next=f+s;
      f=s;
      s=next;}
return 0;
}
