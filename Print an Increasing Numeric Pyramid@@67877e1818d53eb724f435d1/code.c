#include<stdio.h>
int main(){
    int i,j,k=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d ",k);
            k++;
        }
  printf("\n");  }
}