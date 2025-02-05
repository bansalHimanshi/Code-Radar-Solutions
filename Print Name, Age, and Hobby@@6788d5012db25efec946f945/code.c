#include <stdio.h>
int main()
{
    char Name[50];
    char Hobby[50];
    int Age;
    scanf("%d",&Age);
    scanf("%s %s",&Name,&Hobby);
    printf("Name: %s\n",Name);
    printf("Age: %d\n",Age);
    printf("Hobby: %s",Hobby);
}