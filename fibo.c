#include <stdio.h>
 int main()
{
  int n,f=1,s=1,next,c;
  scanf("%d",&n);
  printf("%d %d ",f,s);
  for (c =0;c<n-2;c++)
  {
      next=f+s;
      f=s;
      s=next;
printf("%d ",next);
  }
 return 0;
}
