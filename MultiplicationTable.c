#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Multiplication table of %d is:\n",n);
    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d",i,n,(i*n));
        printf("\n");
    }
}
