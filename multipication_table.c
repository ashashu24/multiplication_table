#include <stdio.h>

int main()
{
    int num,i,lower,upper;
    printf("enter the no:\n");
    scanf("%d",&num);
    printf("enter the Lower and Upper Range\n");
    scanf("%d\n%d",&lower,&upper);
    for(i=lower;i<=upper;i++)
    {
        printf("%d*%d=%d\n",i,num,i*num);
    }
}
