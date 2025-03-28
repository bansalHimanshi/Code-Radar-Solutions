/*#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
   printf("\n");
  }
}*/
#include<stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        // Correcting the space loop to adjust dynamically for each row
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Printing the stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Moving to the next line
        printf("\n");
    }
    return 0;
}