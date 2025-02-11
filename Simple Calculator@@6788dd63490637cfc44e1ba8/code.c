#include <stdio.h>
int main(){
/*    
int a,b,c;
char d;
scanf("%c",&d);
scanf("%d %d",&a,&b);
switch (d)
{
    case '+' :
    c=a+b;
    printf("%d",c);
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
*/
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if (c=="+"){
        printf("%d",a+b);
    }
    else if(c=="-")
    {
        printf("%d",a-b);
    }
    else if(c=="*"){
        printf("%d",a*b);
    }
    else if(c=="/"){
        
        printf("%d",a/b);
        
    }
    else{
        printf("error");
    }
    return 0;
}