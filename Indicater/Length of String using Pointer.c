#include<stdio.h>
#include<string.h>
main()
{
	char name[50];
	printf("enter the string :");
	gets(name);

	int len=strlen(name);
	int *ptr=&len;
	printf("%d",*ptr);
}