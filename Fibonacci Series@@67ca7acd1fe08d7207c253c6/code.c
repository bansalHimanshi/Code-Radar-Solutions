#include<stdio.h>
int fibonacciSeries(int);

int fibonacciSeries(int n)
{
    int a,b=0;
    for(b=1;b<=n;b=b+a)
    {
        printf("%d ",a);
        a=a+b;
        printf("%d ",b);
        //return 1;
    }
}