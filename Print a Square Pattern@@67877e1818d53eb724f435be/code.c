#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        for(b=1;b<=a;b++)
        {
            if(a==b)
            {
                printf("* ");
            }
        }
    }
}