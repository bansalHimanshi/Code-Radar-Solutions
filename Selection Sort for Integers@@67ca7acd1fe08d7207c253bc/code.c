#include<stdio.h>
void selectionSort(int arr[i],int n){
    int i,f,tem;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(f=i+1;f<n;f++)
        {
            if(arr[i]>arr[f])
            {
                tem=arr[i];
                arr[i]=arr[f];
                arr[i]=arr[f];
            }
        }
    }
}
void printArray(int arr[];int n)
{
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}