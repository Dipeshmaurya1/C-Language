#include<stdio.h>

main()

{
	int a=1;
	int b;
		printf("Enter Any Table:");
		scanf("%d",&b);
	while(a<=10)
	{
		printf("%d X %d = %d\n",b,a,b*a);
		a++;
	}
}