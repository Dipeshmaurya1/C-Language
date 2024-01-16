#include<stdio.h>

main()
{
	int x,i;
	printf("Enter The Size of Array:");
	scanf("%d",&x);
	int a[x];
	
	for(i=0;i<x;i++)
	{
		printf("Enter Value of Array a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int *sqr;
	for(i=0;i<x;i++)
	{
		sqr=&a[i];
		printf("%d,",*sqr*a[i]);
	}
}