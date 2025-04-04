#include<stdio.h>
int main()
{
    int d,n,p
    int a[n],sum=0;
    scanf("%d",&n);
    for(d=0;d<n;d++)
    {
        scanf("%d",&a[d]);
    }
    for(d=0;d<n;d++)
    {
        sum+=a[d];
        printf("%d ",a[d]);
    }
}