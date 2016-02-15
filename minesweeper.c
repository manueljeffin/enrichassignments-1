#include<stdio.h>

void main()
{

 int arr[6][6],i,j;
 
 arr[0][0] = 0;
 arr[5][5] = 0;
 arr[3][2] = 0;
 arr[5][1] = 0;
 for(i=0;i<6;i++)
 {
		for(j=0;j<6;j++)
		{
		 		if(arr[i][j]!=0)		 
		 		{
		 		 		 int k,num=0,temp,endcol,endrow,startrow,l;
		 		 		 temp = (j==0)? j:j-1;
		 		 		 endcol = (j!=5)? j+1:j;
		 		 		 startrow = (row==0)? row:row-1;
		 		 		 endrow = (i==5)? row:row+1;
		 		 		 for(k=startrow;k<=endrow;k++)
		 		 		 {
		 		 		 		for(l=temp;l<=endcol;l++)
		 		 		 		{
		 		 		 		 		 if(arr[i][j] == 0)
		 		 		 		 		 {
		 		 		 		 		   num++;
		 		 		 		 		 }   
		 		 		 		}
		 		 		 }		
		 		 		 	arr[i][j]=num;
		 		}
		 		else
		 		{
		 		  arr[i][j] = -1;
		    }
		    
	}
	for(i=0;i<6;i++)
	{
	  for(j=0;j<6;j++)
	  {
	    printf("%d",a[i][j]);
	 }
  }
}  
 
}	
