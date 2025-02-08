#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    for(c=1;c<=a;c++)
{
       for(d=c;d<=b;d--)
       {
        printf("*\n");
       }
}
}