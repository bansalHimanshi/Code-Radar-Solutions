#include <stdio.h>
int isPrime(int);

int isPrime(int c){
    int a,b,c,d;
   // scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        if (c%a==0)
        b++;
    }
    if(b>2 || c==0 || c==1)
    {
     return 0;

    }
    else {
        return 1;
    }
}

int main
{
int c;
scanf("%d";&c);
if (isPrime(c)){
    printf("prime");
}
else {
    printf("not prime");
}
}

    

