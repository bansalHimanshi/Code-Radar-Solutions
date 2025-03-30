#include <stdio.h>
void bubbleSort(int);

void bubbleSort(int n)
{
    int arr[50];
    int i ,f,temp,a;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(f=i+n;f<n;f++)
        {
            temp=arr[f];
            arr[f]=arr[i];
            arr[i]=temp;
        }
    } printf("%d",arr[i]);
}




