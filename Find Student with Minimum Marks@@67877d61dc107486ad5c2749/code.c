#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        int rollno;
        char name[50];
        float marks;
    };
    struct student s1[60];
    int i,n;
    int min;
    int minindex=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&s1[i].rollno);
        scanf("%s ",&s1[i].name);
        scanf("%f\n",&s1[i].marks);
    }
    for(i=0;i<n;i++)
    {
        if(s1[i].marks<min)
        minindex=s1[i].marks;
    }
        printf("%d ",s1[minindex].rollno);
        printf("%s ",s1[minindex].name);
        printf("%f\n",s1[minindex].marks);
}