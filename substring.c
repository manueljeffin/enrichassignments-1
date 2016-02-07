#include<stdio.h>
void substring( char str[], char substr[])
{
  int i=0;
  for(i=0;str[i]!='\0';i++)
  {
    for(j=0;j<i;j++)
    {
      if(str[i]==str[j])
      {
       break;
      }
    }
    substr[i]=str[j];
  }
}  

void main()
{
  char s[30],ans[20];
  scanf("%s",s);
  substring(s,ans);
  printf("%s",ans);
}
  
