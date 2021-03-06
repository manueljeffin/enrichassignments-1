#include<stdio.h>
void combinationUtil(int arr[],int n,int r,int index,int data[],int i);
 
void printCombination(int arr[], int n, int r)
{
    
    int data[r];
 
    
    combinationUtil(arr, n, r, 0, data, 0);
}
 

void combinationUtil(int arr[], int n, int r, int index, int data[], int i)
{
    int j;
    if (index == r)
    {
        for (j=0; j<r; j++)
            printf("%d ",data[j]);
        printf("\n");
        return;
    }
 
    
    if (i >= n)
        return;
 
    
    data[index] = arr[i];
    combinationUtil(arr, n, r, index+1, data, i+1);
 
    
    combinationUtil(arr, n, r, index, data, i+1);
}
 

int main()
{
    int arr[] = {1, 2, 3, 4};
    int r = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 1;
    while(i<=r)
    {
     printCombination(arr, n, i);
     i++;
    }
    return 0;
}
