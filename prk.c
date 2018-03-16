#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Kabali clan");
scanf("%d",&a);
printf("opposite clan");
scanf("%d",&b);
if(a<=1024&&b<=1024)
{
c=b-a;
printf("\n %d",c);
}
else
{
printf("\nEnd of file");
}
getch();
}
