#include<stdio.h>
void compress(char *str);

void main()
{
  char *s,a[2];
  s=a;
  scanf("%s",s);
  compress(s);
}

void compress(char *str)
{
  int count = 0,i,j=0,digit,rev;
  char ch, *op;
  ch = str[0];
  for(i=1; ;i++)
  {
    if(ch==str[i])
    {
        ++count;
    }
    else
    {
      op[j++]=ch;
      if(count >= 3)
      {
        while(count > 0)
        {
          rev=rev*10+(count%10);
          count/=10;
        }  
        while(rev > 0)
        {
          digit = rev % 10;
          op[j++] = digit + '0';
        }
      }  
        else if(count == 2)
        {
          op[j++];
        }
        ch = str[i];
        printf("%s", op);
    }      
  }      
}  
        
        
      
