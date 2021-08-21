#include<stdio.h>
main()
{
	char s[100];
	int i,len=0;
	printf("Enter a string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
{
		len++;
	}
	printf("Length of the string is %d",len);
}
