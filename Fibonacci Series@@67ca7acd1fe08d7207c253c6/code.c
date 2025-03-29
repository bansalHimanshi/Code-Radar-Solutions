#include<stdio.h>
void fibonacciSeries(int);

void fibonacciSeries(int n)
{
    int a=0,b=1;
    for(b=1;b<=n;b=b+a)
    {
        printf("%d ",a);
        a=a+b;
        printf("%d ",b);
        //return 1;
    }
}