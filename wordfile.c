#include<stdio.h>
#include<ctype.h>

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
void main()
{
  int words,letters,spl;
  words = count_words();
  letters = count_letters();
  spl = count_spl();
  printf("The number of words in the given file is %d",words);
  printf("The number of letters in the give file is %d",letters); 
  printf("The number of specail chracter in the give file is %d",spl);
  
