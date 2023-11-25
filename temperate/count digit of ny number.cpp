#include<stdio.h>

main()

{
	int any;
	int total=0;
		printf("Enter Any Number:");
		scanf("%d",&any);
	while(any>0)
	{
		any/=10;
		total++;
	}
	printf("Digit in Number is= %d",total);
}