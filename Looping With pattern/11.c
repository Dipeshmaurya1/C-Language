//Print a Pattern 
//5 4 3 2 1
//4 3 2 1
//3 2 1
//2 1
//1 by looping
#include<stdio.h>

main()

{
	int a,b;	
	for(a=5;a>=1;a--)
	{
		for(b=a;b>=1;b--)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}