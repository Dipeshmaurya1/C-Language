#include<stdio.h>
main()
{
	int x=1;
	int sum=1;
	int n;
		printf("Enter Any Value: ");
		scanf("%d",& n);
	for(x=1;x<=n;x++)
	{
		sum=sum*x;

	}
	printf("%d",sum);
}