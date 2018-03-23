#include <stdio.h>
void main(void) {
	char s[10];
	int i;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			printf("%c",s[i]);
		}
    getch();
  }
