#include <stdio.h>
 
int main(void)
{
   int arr[10], position, i, n, value;
 
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
    scanf("%d", &arr[i]);
   }  
  scanf("%d", &position);
  scanf("%d", &value);

   for (i = n - 1; i >= position - 1; i--)
   {      
     arr[i+1] = arr[i];
   }   
 
   arr[position-1] = value;
 
  
 
   for (i = 0; i <(n+1); i++)
   {     
     printf("%d\n", arr[i]);
   }   
 
   return 0;
}
  
      
      
