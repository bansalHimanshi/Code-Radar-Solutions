#include<stdio.h>
int main()
{
    int d,n,p,a[50],sum=0;
    scanf("%d",&n);
    for(d=0;d<n;d++)
    {
        scanf("%d",a[d]);
    }
    for(d=0;d<n;d++)
    {
        sum+=a[d];
        printf("%d",a[d]);
    }
}