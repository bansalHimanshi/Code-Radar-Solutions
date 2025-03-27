# include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&c);
    for(a=0;a<=c;a++)
    {
        for(b=0;b<=c;b++)
        {
            if(a==0 ||a==c-1 || b==0 || b==c-1)
            
            {
            
            printf(" *");
            }
            else printf(" ");
        }
   printf("\n"); }
}