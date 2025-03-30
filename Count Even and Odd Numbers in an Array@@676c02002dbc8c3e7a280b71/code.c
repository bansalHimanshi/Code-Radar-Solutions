#include<stdio.h>
int main()
{
    int a[50],d,n,sum;
    int even=0;
    int odd=0;
    scanf("%d",&n);
    for(d=0;d<n;d++)
    {
        scanf("%d",&a[d]);
    }
    for(d=0;d<n;d++)
    {
        if(a[d]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    } 
    printf("%d ",even);
    printf("%d",odd); 
}