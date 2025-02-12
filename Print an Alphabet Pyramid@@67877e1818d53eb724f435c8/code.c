#include<stdio.h>
int main()
{
    int a,b,c;
    char d;
   // scanf("%c",&d)
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%c ",d);
            d++;
        }
  printf("\n");  }
}