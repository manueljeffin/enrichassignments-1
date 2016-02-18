#include<stdio.h>

int main(void)
{
  int a,n,d,type,i;
  printf("Enter Type 1. AP 2.GP");
  scanf("%d",&type);
  scanf("%d",&n);
  scanf("%d",&a);
  scanf("%d",&d);
  
  if(type == 1)
  {
    for(i=1;i<=n;i++)
    {
      printf("%d ",a);
      a+=d;
    }
  }
  else if(type == 2)
  {
    for(i=1;i<=n;i++)
    {
      printf("%d ",a);
      a*=d;
    }
  }
  else 
  {
   printf("Invalid Option");
  }
  return 0;
}  
  
