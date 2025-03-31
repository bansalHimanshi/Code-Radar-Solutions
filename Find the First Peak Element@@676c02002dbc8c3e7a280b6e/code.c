#include<stdio.h>
int main()
{
    int a[50],n,d;
    scanf("%d",&n);
    for(d=0;d<n;d++)
    {
        scanf("%d",&a[d]);
    }
    for(d=0;d<n;d++)
    {
        if(a[d]>a[d-1])
        {
            a[d]=a[d-1];
        }
    }
    printf("%d",a[50]);
}