#include<stdio.h>
int main()
{
    int a,b,c;
    char d;
    scanf("%d",&c);
    for(a=65;a<=c;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%c ",a);
            d++;
        }
  printf("\n");  }
}