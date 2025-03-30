#include<stdio.h>
int main()
{
    int a[50],d,p,n,temp;
    scanf("%d",&n);
    for(d=0;d<n;d++)
    {
        scanf("%d",&a[d]);
    }
    for(d=0;d<n;d++)
    {
        for(p=d+1;p<n;p++)
        {
            if(a[d]>a[p])
        }
    }
    if(a[d]>=a[p])
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
}