#include<stdio.h>
#include<stdlib.h>

void main()
{
  int row,col,completed;
  char option;
  int array[3][3]={{2,7,8},{1,3,5},{4,6,0}};
  printf("Initial Array");
  print(array);
  printf("Let's Start");
  printf("Enter the Character in UpperCase Only\n");
  printf("U for Up,D for Down,L for Left,R for right,Q to quit\n");
  scanf("%c",&option); 
  while(option != 'Q')
	{	
		
		findEmpty(row,col,array);
		swap(row,col,option,array);
		completed=checkCompletion(array);
		print(array);
		printf("Enter the Character in Upper Case Only\n");
		printf("U for Up,D for Down,L for Left,R for right,Q to quit\n");
		scanf("%c",&option);
	  if(completed == 1)
		{
			 printf("completed\n");
			 return;
		}
		
	}
	if(option == 'Q')
	{
	  printf("Quitting");
	  exit(0);
	}
 

 }

	  
	




void print(int array[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			if(array[i][j]!=0)
			{
				printf("|%d|	",array[i][j]);
			}
			else
			{
				printf("| |	");
			}
		}
		printf("\n");
	}

	
}
void findEmpty(int row,int col,int array[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(array[i][j]==0)
			{
				row=i;
				col=j;
			}
		}
	}
}
void swap(int row,int col,char option, int array[][3])
{
	int temp;
	if(option =='U' && row!=0)
	{
		temp=array[row][col];
		array[row][col]=array[row-1][col];
		array[row-1][col]=temp;
	}
	if(option=='R' && col!=2)
	{
		temp=array[row][col];
		array[row][col]=array[row][col+1];
		array[row][col+1]=temp;
	}
	if(option=='L'&& col!=0)
	{
		temp=array[row][col];
		array[row][col]=array[row][col-1];
		array[row][col-1]=temp;
	}
	if(option=='D' && row!=2)
	{
		temp=array[row][col];
		array[row][col]=array[row+1][col];
		array[row+1][col]=temp;
	}
}
int checkCompletion(int array[][3])
{
	int i,j;
	int num=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(array[i][j]==num && array[3][3]==0)
			{
				num++;
			}
		}
	}
	if(num==9)
	{
		return 1;
	}
	
}
