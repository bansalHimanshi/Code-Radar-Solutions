#include<stdio.h>
int main()
{
    int d,p,n,a[50],ctr;
    scanf("%d",&n);
    for(d=0;d<=n;d++)
    {
        scanf("%d",&a[d]);
    }
     for(d=0;d<=n;d++)
    {
        for(p=d+1;p<=n;p++)
        {
            if(a[d]==a[p])
            {
                printf("%d\n",a[d]);
               // ctr=1;
                break;
            }
        }
    }//printf("%d",ctr);
}