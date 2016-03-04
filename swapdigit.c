#include<stdio.h>

int main(void)
{
 int number[20],no_of_digits,half,i=0,temp;// declare array to store the number and variable to store no of digits, varaibale to access array
 
 while(1)// infinite loop 
 {
  scanf("%d",&number[i]);
  
  if(number[i] == ' ')// if input is space break the loop
  {
    break;
  }  
  ++i;
}
no_of_digits = i+1;// determine number of digits
half = (no_of_digits/2);// determine half of the digit number
if(no_of_digits % 2 == 0)// if even number of digits
{
    for(i=0;i<half;i++)// swap
		{
			temp=number[i];
			number[i]=number[i+half];
			number[i+half]=temp;
		}
}
else// if odd number of digits
{
		for(i=0;i<half;i++)
		{
			temp=number[i];
			number[i]=number[i+half+1];
			number[i+half+1]=temp;
		}
}
for(i=0;i<no_of_digits;i++)
{
  printf("%d",number[i]);
}  

}  
