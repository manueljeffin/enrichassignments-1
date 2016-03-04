#include<stdio.h>

int main(void)
{
  int number[100]={0},N;//declare variable for size of array and a number array
  int ans,i,x,flag=0;// declare variable for ans, index value to access a number in array, value whose least greatest is to be searched
  
  scanf("%d",&N);//read input for size of array
  for(i=0;i<N;i++)// read values for array
  {
   scanf("%d",&number[i]);
  } 
  number[N] = 32768; // since we check till i+1 i add an extra value to array which is the max value stored in int
  
  scanf("%d",&x);//read value whose least greatest is to be found
  
  for(i=0;i<N;i++)
  {
    if((number[i] > x) && (number[i] < number[i+1])) // checking if value is greater as  well as making sure it is the highest index
    {
      ans = i;
      flag = 1;// to intimate that value greater than x is found
    }
  }
  if(flag == 0)// to check whether the value has been found or not
  {
    ans = -1;// set ans to -1
  }  
  
    printf("%d ",ans);
  
  
}  
  
  
  
  
  
