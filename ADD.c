#include<stdio.h>

// Using third variable
void main()
{
 int sum,a,b;
 scanf("%d %d",&a,&b);
 sum = a + b;
 printf("%d",sum);
}
// Using array
void main()
{
  int a[3];
  scanf("%d %d", &a[0], &a[1]);
  arr[2] = arr[0] + arr[1];
  printf("%d", arr[2]);
}
// using function
int sum;
void add(int a , int b)
{
  sum = a+b;
  return sum;
}
void main()
{
 int A,B;
 scanf("%d %d", &A,&B);
 printf("%d",add(A,B));
}
