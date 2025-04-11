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
    float averagemarks,totalmarks=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&s[i].rollno);
        scanf("%s ",&s[i].name);
        scanf("%f",&s[i].marks);
        totalmarks+=s[i].marks;
    }
    averagemarks=totalmarks/n;
printf("Average Marks: %.2f",averagemarks);

}