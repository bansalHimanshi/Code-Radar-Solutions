#include<stdio.h>
void bubbleSort(char arr[],int n)
{
    int i,temp,f;
    for(i=0;i<n;i++)
    {
        scanf(" %c",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(f=i+1;f<n;f++)
        {
            if(arr[i]>arr[f])
            {
                temp=arr[f];
                arr[f]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

void printArray(char arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%c ",&arr[i]);
    }
}