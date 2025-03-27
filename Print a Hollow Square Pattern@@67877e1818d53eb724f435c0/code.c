# include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&c);

    for(a=0;a<=c;a++)
    {
        for(b=0;b<=c;b++)
        {
            if(a==1 ||a==c || b==1 || b==c)
            {
            
            printf("*");
            }
            else{printf(" ");}
        }
   printf("\n"); }
}
/*#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}*/