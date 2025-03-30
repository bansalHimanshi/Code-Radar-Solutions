#include <stdio.h>
int main()
{
    int a,b,c;
    char d= 'A';
    scanf("%d",&c);
    for(a=0;a<=c;a++)
    {
        for(b=0;b<=a;b++)
        {
           printf("%c ",'A'+b);
            d++;
        }//d='A';
        
printf("\n"); 
   }
}