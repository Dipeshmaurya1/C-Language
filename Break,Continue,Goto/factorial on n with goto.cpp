#include<stdio.h>

main()

{
	int x=1;
	int n;
	int sum=1;

		printf("Enter Any Value:");
		scanf("%d",&n);
	
	start:
	sum=sum*x;
	x++;
	if(x<=n)
	{
		goto start;
	}
	printf("%d ",sum);
}