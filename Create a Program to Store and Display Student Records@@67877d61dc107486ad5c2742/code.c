#include<stdio.h>
int main()
{
    struct student{
        int rollno;
        char name[50];
        float marks;
    };
    struct student s[50];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d ",&s[i].rollno);
        scanf("%c ",&s[i].name);
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<=n;i++)
    {
        printf("Roll Number:%d, ",s[i].rollno);
        printf("Name:%c, ",s[i].name);
        printf("%Marks:f",s[i].marks);
    }printf("\n");
}