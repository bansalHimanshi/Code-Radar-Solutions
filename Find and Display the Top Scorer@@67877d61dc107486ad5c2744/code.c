#include<stdio.h>
int main()
{
    struct student
    {
       int rollno;
       char name[50];
       float marks;
    };
    struct student s1[50];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d ",&s1[i].rollno);
        scanf("%s ",&s1[i].name);
        scanf("%f ",&s1[i].marks);
    }
    float max=s1[i].marks;
    int max_index=0;
    for(i=0;i<=n;i++)
    {
        if (s1[i].marks>max){
            max=s1[i].marks;
            max_index=i;
        }
        
    }
        printf("Top Scorer: ");
        printf("Roll Number: %d, ",s1[max_index].rollno);
        printf("Name: %s, ",s1[max_index].name);
        printf("Marks %.2f ",s1[max_index].marks);
    
}