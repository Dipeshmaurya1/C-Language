//Print a Pattern 
//5 4 3 2 1
//5 4 3 2
//5 4 3
//5 4
//5 by Looping
#include<stdio.h>

main()

{
	int a,b;
	
	for(a=1;a<=5;a++)
	{
		for(b=5;b>=a;b--)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}