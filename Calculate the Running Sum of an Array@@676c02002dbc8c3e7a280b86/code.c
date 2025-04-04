/*#include<stdio.h>
int main()
{
    int d,n,p,a[50],sum=0;
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
}*/
#include<stdio.h>
int main()
{
    int d, n, a[50];
    scanf("%d", &n);
    for(d = 0; d < n; d++)
    {
        scanf("%d", &a[d]);
    }
    
    // Sum of the first and last elements
    int sum = a[0] + a[n - 1];
    printf("%d ", sum);
    
    return 0;
}