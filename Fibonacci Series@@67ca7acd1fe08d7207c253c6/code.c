#include<stdio.h>
int fibonacciSeries(int);

int fibonacciSeries(n)
{
    int a,b=0,n;
    for(b=1;b<=n;b=b+a)
    {
        printf("%d\t",a);
        a=a+b;
        printf("%d\t",b);
        //return 1;
    }
}