//1. wap to print reversed multplication table of given number.(test)
#include<stdio.h>
main()
{
	int x=10;
	int n;
		printf("Enter Any Value:");
		scanf("%d",&n);
	while(x>=1)
	{
		printf("%d X %d=%d \n",n,x,n*x);
		x--;
	}
}