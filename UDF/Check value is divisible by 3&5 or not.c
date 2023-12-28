#include<stdio.h>

void division()
{
	int x;
	printf("Enter Any Value:");
	scanf("%d",&x);
	
	if(x%3==0 || x%5==0)
	{
		printf("This Number is divisible by 3 or 5 :)");
	}
	else
	{
		printf("This Number is not divisible by 3 or 5 ");
	}
}

main()
{
	division();
}