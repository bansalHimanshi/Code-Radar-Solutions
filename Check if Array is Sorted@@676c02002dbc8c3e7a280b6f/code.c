#include<stdio.h>
int main()
{
    int a[50],d,p,n,temp;
    scanf("%d",&n);
    for(d=0;d<n;d++)
    {
        scanf("%d",&a[d]);
    }
    for(d=0;d<n-1;d++)
    {
        if(a[d]<a[d+1])
        {
            printf("Not Sorted");
            return 0;
        }
    }
    
 printf("Sorted");       
    
}