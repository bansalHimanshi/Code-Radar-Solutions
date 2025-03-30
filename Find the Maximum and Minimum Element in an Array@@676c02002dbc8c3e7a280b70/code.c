#include<stdio.h>
int main()
{
    int a[50],d,n,max,min;
    scanf("%d",&n);
    for(d=0;d<n;d++)
    {
        scanf("%d",&a[d]);
    }
    max=a[0];
    min=a[0];
    for(d=0;d<n;d++)
    {
        if(a[d]>max)
        {
            max=a[i];
        }
        if(a[d]<min)
        {
            min=a[i];
        }
    }
    printf("%d",max);
    printf("%d",min);
}