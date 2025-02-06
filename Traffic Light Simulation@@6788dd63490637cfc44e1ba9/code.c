#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    switch(a)
    {
        case 'R':
        printf("stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("slow down");
        break;
        default:
        printf("Invalid");
    }
}