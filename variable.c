#include<stdio.h>

int no_of_var(char value[], int size) // function to calculate no of variables
{
  int count[26]={0},c=0,i;// declare a array count to keep track of no of occurances of variables and count to keep track of no of variables and an index to access array element
  char ch; // ch to keep track if variable has already occured
  ch = value[0];
  for(i=0;i<size;i++) // count number of variables and check for redundancy
  {
    
    if(value[i] >=65 && value[i] <=90)
    {
      if(count[value[i]-65]==0)// checks if variable is occuring for the first time in expression
      {
       count[value[i]-65] = 1; // updates the value of one if a alphabet has occured
       ++c;//increments count 
      }
    }
  }
  return c;// to return a value
  

}

int main(void)
{
  char ques[30]; // variable declaration ques as an char array
  int size_ques,i,ans;// variable declaration size of the ques an index and answer
  printf("\nEnter the expression. Press Enter if computer has to stop accepting input");
  i=0; //intialize variable to access array in which input is stored
  
  while(1) // a loop that is always true
  {
    scanf("%c",&ques[i]);// read input
    if(ques[i] == '\n') // check if input read is new line if yes then break and stop accepting input
    {
      break;
    }  
    ++i;// increment index value to find size of input
  }  
  
  size_ques = i+1;// size of the array is determined
  for(i=0;i<size_ques;i++)// to convert a lowercase to upper casse if input is lowercase
  {
    if(ques[i] >= 97 && ques[i]<=122)
    {
      ques[i] = ('A' + ques[i] - 'a');
    }
  }  
  
  ans = no_of_var(ques,size_ques);// call the function to calculate no of variables and assign returned value to a variable ans
  printf("%d ",ans);// print answer on the screen
  return 0;

}  
  
