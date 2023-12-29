//Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
#include<stdio.h>
main()
{   int n;
     printf("Enter Size of Array :");
     scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);

	 scanf("%d",&a[i]);
    }

	for(i=0;i<n;i++)
	{
	  printf("%d",a[i]);
    }
    printf("\n");

	int *ptr=&a[n-1];


	for(i=n-1;i>=0;i--)
    {
    	printf("%d\n",*ptr);
    	ptr-=1;
	}
}