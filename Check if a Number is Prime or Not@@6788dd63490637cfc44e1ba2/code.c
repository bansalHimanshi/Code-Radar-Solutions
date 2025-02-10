# include<stdio.h>
int main{

int b=0,a,c;
 //printf("start :");
// scanf("%d",&b);
 printf("end :");
 scanf("%d",&c);
 for(a=1;a<=c;a++)
 {
 	if(c%a==0)
	b++;
}
if(b>2)
printf("not prime");
else
printf("prime");
 }
