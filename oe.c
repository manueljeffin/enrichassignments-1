#include<stdio.h>
void main()
{
  int n,i,j,k;
  scanf("%d",n);
  for(i=1;i<=n;i++)
  {
    for(j=1,k=i;j<=i;j++,k+=2)
    {
      printf("%d",k);
    }
    printf("\n");
  }
}  
