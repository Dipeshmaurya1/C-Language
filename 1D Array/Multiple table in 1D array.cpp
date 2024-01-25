#include<stdio.h>

main()

{
	int a,b,n;
	printf("Enter The Number of Table you want:");
	scanf("%d",&n);
	int x[n];
	for(a=0;a<n;a++)
	{
		printf("enter %d :",a);
		scanf("%d",&x[a]);
	}

	for(a=0;a<n;a++)
	{
		for(b=1;b<=10;b++)
		{

			printf("%d X %d =%d \n",x[a],b,x[a]*b);
		}
		printf("\n");
	}
	
}
