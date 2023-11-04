#include<stdio.h>
main()
{
	int salary=100;
	int HRA=10;
	int DA=5;
	int TA=8;
	int BS;
	
	HRA=(salary*10)/100;
	DA=(salary*5)/100;
	TA=(salary*8)/100;
	BS=salary+HRA+DA+TA;
	printf("Amount :%d",BS);
}