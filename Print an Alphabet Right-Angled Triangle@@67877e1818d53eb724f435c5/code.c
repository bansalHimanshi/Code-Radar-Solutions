#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&c);
    for(a=65;a<=c;a++)
    {
        for(b=65;b<=a;b++)
        {
            printf("%c ",b);
        }
printf("\n");    }
}