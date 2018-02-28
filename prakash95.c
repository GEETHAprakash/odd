#include<string.h>
#include<stdio.h>
void main()
{
	char a[6],b[6],i;
	a[6]="madam";
	strcpy(b,a);
	strrev(a);
	i=strcmp(b,a);
	if(i==0)
	{
		printf("palindrome");
		else
		printf("not a palindrome");
	}
	
	getch();
  }
