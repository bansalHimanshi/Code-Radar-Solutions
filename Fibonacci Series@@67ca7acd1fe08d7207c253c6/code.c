#include<stdio.h>
int fibonacciSeries(int);

int fibonacciSeries(int n)
{
    int a,b=0;
    for(b=1;b<=n;b=a+b)
    {
        printf("%d\t",a);
        a=a+b;
        printf("%d\t",b);
        //return 1;
    }
}