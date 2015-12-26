#include<stdio.h>
void main()
{
    int matrix[10][10],c,i,j,size,temp;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(c=0; c<size/2 ;c++) 
    {
        j=c;
        for(i=c+1; i<size-c; i++)  
        { 
           temp=matrix[i][j];
           matrix[i][j]=matrix[j][i];
           matrix[j][i]=temp;
         }    

        i=size-c-1;
        for(j=c+1; j<size-c; j++) 
         {
            temp = matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
 
         }
    }

    printf("Transpose matrix: \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            printf(" %d ",matrix[i][j]);

        printf("\n");
    }
}
