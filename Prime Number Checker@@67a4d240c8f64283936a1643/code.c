#include <stdio.h>
void isPrime(int,int);

int main(){
    int a,b,c,d;
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        if (c%a==0)
        b++;
    }
    if(b>2 || c==0 || c==1)
    {
        printf("not prime");
        
    }
}

    

