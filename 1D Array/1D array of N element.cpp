//1.WAP to get & print 1D array of N elements.
#include<stdio.h>

main()

{
  	int a,n;
		printf("enter the value of :");
		scanf("%d",&n);
	int x[n];
	for(a=0;a<n;a++)
	{
		printf("Enter The Value of x[%d]:",a);
		scanf("%d",&x[a]);
	}
	for(a=n-1;a>=0;a--)
	{
			printf("%d ",x[a]);
	}
}