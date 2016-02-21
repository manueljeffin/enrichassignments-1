#include<stdio.h>

int inarray(int arr[],int size, int value)
{
  int index,flag = -1;
  for(index = 0 ;index < size;index++)
  {
    if(arr[index]==value)
    {
      flag = index;
      break;
    }
    else
    {
      flag = -1;
    }
  }
  return flag;
  
  
}

int main(void)
{

 int a[20],m,i,ans,v;
 scanf("%d",&m);
 for(i=0;i<m;i++)
 {
   scanf("%d",&a[i]);
 }
 scanf("%d",&v);// value whose index is to be found
 ans = inarray(a,m,v);
 if(ans == -1)
 {
   printf(ans);
 }
 else
 {
  printf("%d",ans);
 }
 return 0;
} 
  

  
