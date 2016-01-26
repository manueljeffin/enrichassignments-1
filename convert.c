#include<stdio.h>

void convert(int n, int b)
{
 int r,i=0;
 char ans[128];
 while( n > 0)
 {
		r = n % b;
		if(r <= 9)
		{
			ans[i] = r;		
		}
		else
		{
			ans[i] = r + 55;
		}
		i++;
 }
 for(i=n-1;i>=0;i--)
 {
		 printf("%c",ans[i]);
 }
} 
void main() 
{

	int number, base;

	printf("Enter a number :");
	scanf("%d", &number);

	printf("\nEnter a base :");
	scanf("%d", &base);
  convert(number,base);
}
