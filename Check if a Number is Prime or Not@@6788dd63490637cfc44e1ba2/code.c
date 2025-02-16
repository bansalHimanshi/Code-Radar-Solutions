#include<stdio.h>
int main()
{
  int a,b=0,c;
  scanf("%d",c);
  for(a=1,a<=c,a++)
  {
    if(c%a==0)
    b++;
  }
  if(b>2 || c==0 ||c==1)
  {
    printf("Prime");
  }
  else
  {
    printf("Not Prime");
  }
}
/*#include <stdio.h>

int main() {
    int a, b = 0, c;
    scanf("%d", &c);

    for(a = 2; a < c; a++) {
        if (c % a == 0) {
            b++;
        }
    }

    if (b > 0 || c == 0 || c == 1) {
        printf("Not Prime\n");
    } else {
        printf("Prime\n");
    }

    return 0;
}*/
