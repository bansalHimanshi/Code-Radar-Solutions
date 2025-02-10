#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c = 2;
    scanf("%d %d", &a, &b);
    a = (int)pow(b, c); // This calculates b raised to the power of c

    if (a == b) // Use == to compare values
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}

   /* int a,b;
    scanf("%d %d",&a,&b);
    if(a==b*b){
        printf("Yes");
    }
    else{
        printf("No");
    }*/

}