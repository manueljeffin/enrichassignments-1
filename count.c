#include<stdio.h>

void main()
{
  int n,count;
  scanf("%d",&n);
  while(n > 0)
  {
   n=n/2;
   ++count;
  }
  printf("The Number of bits required to print binary eqivalent of given number is %d",count);
