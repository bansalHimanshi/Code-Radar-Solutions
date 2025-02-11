#include<stdio.h>
int main()
{
    int a,b=0,c;
    scanf("%d",&c);
    for(a=2;a<=c || b<=c ;a++)
    {
        if (a%c==0)
        b++;
    }
    if(b>2)
    {
        printf("Not Prime");
    }+
    else if (c==0 || c==1){
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}