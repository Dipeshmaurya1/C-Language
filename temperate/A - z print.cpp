//Write C program to print all alphabets from a to z. using do while loop.
#include<stdio.h>

main()

{
	char n='A';
	do
	{
		printf("%c ",n);
		n++;
	}while(n<='Z');
}