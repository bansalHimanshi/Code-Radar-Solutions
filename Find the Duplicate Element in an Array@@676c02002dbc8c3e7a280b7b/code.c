#include<stdio.h>
int main()
{
    int d,p,n,a[50];
    scanf("%d",&n);
    for(d=0;d<=n;d++)
    {
        scanf("%d",&a[d]);
    }
     for(d=0;d<=n;d++)
    {
        printf("%d",a[d]);
    }
}