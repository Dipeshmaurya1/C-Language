//5.Write a program in C to read n number of values in an array and display them in reverse order
#include<stdio.h>

main()

{
  	int a,n;
		printf("Enter The Value:");
		scanf("%d",&n);
	int x[n];
	for(a=0;a<n;a++)
	{
		printf("Enter The Value of x[%d]:",a);
		scanf("%d",&x[a]);
	}
	for(a=n-1;a>=0;a--)
	{
			printf("%d",x[a]);
	}
}