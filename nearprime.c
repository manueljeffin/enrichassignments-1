#include<stdio.h>
int checkprime(int num)
{
  int i,flag=1;
	
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}	
	

void main()
{
  int n,i,flag=0;
  scanf("%d",&n);
  if(n>2)
  {
   for(i=n;;i++)
   {
     flag=checkprime(i);
     if(flag==1)
     {
       printf("The nearest prime number is %d", i);
       break;
     }
    }
  }
  else if(n<0)
  {
   printf("The Number entered is a negative number");
  } 
  else
  {
    printf("The nearest prime number is 2");
  }
}
  
  
  
