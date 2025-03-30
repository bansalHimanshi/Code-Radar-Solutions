#include <stdio.h>
//void bubbleSort(int);
//void printArray(int)
void bubbleSort(int arr[], int n)
{
    
    int i ,f,temp,a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(f=i+n;f<n;f++)
        {
            temp=arr[f];
            arr[f]=arr[i];
            arr[i]=temp;
        }
    } 
}

void printArray(int arr[], int n)
{
    int i;
    for(i =0 ;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}


