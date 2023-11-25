// 8. wap to printf multiplication table of 1 to 10.
#include<stdio.h>

main()

{
	int a,b=1;
	for(a=1;a<=10;a++)
	{
		for(b=1;b<=10;b++)
		{
			printf("%d X %d = %d\n",a,b,a*b);
		}
		printf("\n");
	}
	
}