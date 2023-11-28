//Print a Pattern 
//5 5 5 5 5
//4 4 4 4
//3 3 3
//2 2
//1 by Looping 
#include<stdio.h>

main()

{
	int a,b;
	for(a=5;a>=1;a--)
	{
		for(b=a;b>=1;b--)
		{
			printf("%d",a);
		}
		printf("\n");
	}
}