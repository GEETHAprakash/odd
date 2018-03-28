#include<stdio.h>
void main()
{
    int number,fact=1,i;
    printf("enter number");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
getch();
}
