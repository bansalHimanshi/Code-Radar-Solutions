#include<stdio.h>
int fibonacciSeries(int);

int fibonacciSeries(int n)
{
    int a=1,b=1;
    for(b=1;b<=n;b=b+a)
    {
        printf("%d ",a);
        a=a+b;
        printf("%d ",b);
        //return 1;
    }
}