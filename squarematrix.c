#include<stdio.h>
#include<stdlib.h>

void main() 
{

	int i,j,n,m,k;
	int matrix[20][20];

	printf("\nEnter the order of the magic square : ");
	scanf("%d", &n);

	if (n == 0) 
	{
		printf("The square matrix cannot be genrated");
	}

	if (n % 2 == 0) 
	{
		printf("The Matrix cannot be generated");
		return;
	}
	
	if (n == 1) 
	{
		printf("1");
		return;
	}
	i = 0;
	j = n / 2;

	for (k = 1; k <= m; k++) 
	{
	  matrix[i][j] = k;

		i--;
		j++;

		if (k % n == 0) 
		{
			i += 2;
			--j;
		}

		else 
		{

			if (j == n) 
			{
				j -= n;
			}

			else if (i < 0) 
			{
				i += n;
			}

		}
		
	}

	

	printf("\nThe magic square: \n");
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++) 
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}





	
	

 


	


