#include <stdio.h>
int main(){
int a,b,c;
char d;
// scanf("%c",&d);
scanf("%d %d %c",&a,&b,&d);
switch (d)
{
    case '+' :
    c=a+b;
    printf("%d",a+b);
    break;
    case '-' :
    c=a-b;
    printf("%d",c);
    break;
        case '*' :
    c=a*b;
    printf("%d",c);
    break;
        case '/' :
    c=a/b;
    printf("%d",c);
    break;
}
}