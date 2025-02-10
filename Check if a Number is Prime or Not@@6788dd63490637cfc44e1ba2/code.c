#include<stdio.h>
int main()
{
    int a,b=0,c;
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        if (a%c==0)
        b++;
    }
    if(b<2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}