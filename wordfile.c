#include<stdio.h>
#include<ctype.h>
#include<limits.h>

static FILE* read_fp; // file pointer to access file  


int count_words()// function to count words
{
  int count = 0;
  char ch;
  read_fp = fopen("passage.txt","r");
  while(EOF!=(ch=fgetc(read_fp)))// to  read every character from file
  {
     if(ch==' '||ch=='\t'||ch=='\n') // to check whether the end of every word has reached
     {
       ++count;
     }
  }
  fclose(read_fp);
  return count;
}
int count_letters() // function to count letters
{
  int count=0;
  char ch;
  read_fp = fopen("passage.txt","r");
  while(EOF!=(ch=fgetc(read_fp)))
  {
    if( ((ch >=65) && (ch <= 90)) || ((ch>=97) && (ch<= 122)) ) // condtion to check whether the character read is letter or not
    {
      ++count;
    }  
  }
  fclose(read_fp);
  return count;
}
int count_spl()//function to count special characters
{
  int count=0;
  char ch;
  read_fp = fopen("passage.txt","r");
  while(EOF!=(ch=fgetc(read_fp)))
  {
    if( ((ch >=33) && (ch <= 47)) || ((ch>=58) && (ch<= 64)) || ((ch>=91) && (ch <= 96)) ) // condtion to check whether the character read is special character or not
    {
      ++count;
    }  
  }
  fclose(read_fp);
  return count;
} 

char * commonletters()// function to count three common letters
{
  int count[26],i,temp = 0,h1,h2,h3;
  static char max[3];
  h1 = INT_MIN;
  h2 = INT_MIN;
  h3 = INT_MIN;
  char ch;
  read_fp = fopen("passage.txt","r");
  while(EOF!=(ch=fgetc(read_fp))) 
  {
    ++count[ch-65]; // to find the count of letters
  }
  for(i=0;i<26;i++)
  {
    if(count[i] > h1)
    {
      h3 = h2; h2 = h1; h1 = i;
    }
    else if (count[i] > h2)
    {
          h3 = h2; 
          h2 = i;
    }
    else if  (count[i] > h3)
    {
      h3 = i;
    }
  }  
    max[0] = h1 + 65;  // letters which occur frequently
    max[1] = h2 + 65;
    max[2] = h3 + 65;
  return max;
  
}
void main()
{
  int words,letters,spl,i;
  char *hfl;
  words = count_words();
  letters = count_letters();
  spl = count_spl();
  hfl = commonletters();
  printf("The number of words in the given file is %d",words);
  printf("The number of letters in the give file is %d",letters); 
  printf("The number of specail chracter in the give file is %d",spl);
  printf("The 3 Common letters used are %c %c %c",*hfl,*(hfl+1),*(hfl+2));
}  
  
