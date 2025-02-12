/*#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&c);
    for(a=0;a<c;a++)
    {
        for(b=0;b<c;b++)
        {
           // if(b==1 || b==c || a==b)
            
                printf("* ");
            
     printf("\n");   }
    }
}*/
#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
