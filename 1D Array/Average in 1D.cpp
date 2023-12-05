#include<stdio.h>

main()

{
  	int a,n,y;
	int sum=0;
		printf("Enter The Value of N:");
		scanf("%d",&n);
	int x[n];
	for(a=0;a<n;a++)
	{
		printf("Enter The Value of x[%d]:",a);
		scanf("%d",&x[a]);
	}
	for(a=0;a<n;a++)
	{
		sum=sum+x[a];
		y=sum/n;

	}
	printf("The Average is =%d",y);
}