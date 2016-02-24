#include<stdio.h>

int main(void)
{

  int arr[5],i,val,n,middle,start,end;
  scanf("%d"&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
  scanf("%d",&val);
  
	while (start<=end) 
	{
		middle = (start+end)/2;
		if (arr[middle] == value)
		{
		  printf("%d",middle);
			    
		}
		else if (arr[middle] < value) 
		{
			start = middle + 1;
		}
		else
		{
		  end= middle - 1;
		}  
	}
return 0;
}
  
  
