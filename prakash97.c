#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,i,d=0;
printf("Enter the num to be searched\n");
scanf("%d",&a);
printf("\nEnter the intervals\n");
scanf("%d%d",&b,&c);
if((a>b) && (a<c))
{
printf("\nYes");
}
else
{
printf("\nNo");
return 0;
}
