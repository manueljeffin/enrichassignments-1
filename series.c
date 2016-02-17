# include <stdio.h>

int main(void)
{
  int n,s,d,i;
  
  scanf("%d",&n); // N value
  scanf("%d",&s); // Start value
  scanf("%d",&d); // difference value
  
  for(i=1;i<=n;i++)
  {
    printf("%d",s);
    s=s+d;
  }
  return 0;
}  
