#include<stdio.h>

void main()
{
  int n,count = 0;
  scanf("%d",&n);
  if(n==0)
  {
    count = 1;
    printf("The Number of bits required to print binary eqivalent of given number is %d",count);
  }
  else
  {
   while(n > 0)
   {
    n=n/2;
    ++count;
   }
   printf("The Number of bits required to print binary eqivalent of given number is %d",count);
  }
}  
  
