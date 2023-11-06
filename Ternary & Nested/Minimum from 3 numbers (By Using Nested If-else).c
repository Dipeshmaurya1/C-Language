#include<stdio.h>

main()

{
	int a,b,c;
		printf("Enter The Value of A,B,C:");
		scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("A is Minimum");
		}
		else
		{
			printf("C is Minimum");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is Minimum");
		}
		else
		{
			printf("C is Minimum");
		}
	}
}