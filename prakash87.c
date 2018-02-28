
#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    char sen[100];
    int i, count = 0;
    
    printf("Enter a Sentence : \n");
    gets(sen);
    
    for (i=0; i&lt;<span>strlen(sen)</span>;<span>i++)</span>
    {
        if (isspace(sen[i]))
        {
        	count++;
        }
    }
    
    printf("Number of words in the sentence = %d", ++count);
    printf("\n");
    
    return 0;
}
