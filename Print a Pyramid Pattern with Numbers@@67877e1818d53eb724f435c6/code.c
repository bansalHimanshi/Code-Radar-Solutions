#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i-1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2i-1;j++)
        {
            printf("%d ",j);
        }
 printf("\n");   }
}