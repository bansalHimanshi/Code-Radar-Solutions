#include <stdio.h>
int main(){
    
int a,b,c;
char d;
scanf("%d %d %c",&a,&b,&d);
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
      if (b!=0){
      c=a/b;
      printf("%d",c);
      }
      else{
        printf("error");
      }      break;
    default:
     printf("error");
     break;  
}

/*
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if (c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-')
    {
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        if(b!=0){
        printf("%d",a/b);
      }
        else {
        printf("error");
      }
    }
    else{
        printf("error");
    }
    */
}