#include<stdio.h>
int main()
{
    int a,b,c;
    char d='A'
    scanf("%d",&c);
    for(a=c;a>=1;a--)
    {
        for(b=1;b<=a;b++)
        {
            printf("%c ",d);
            d++;
            d='A';
        }
  printf("\n");  }
}
