#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%c",&c);
    for(a=1;a<=c;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%c ",b);
        }
printf("\n");    }
}