#include<stdio.h>
void cude(int n , int a[i][j])
{
	int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int a[n][n];
	int i,j;

    for(i=0;i<n;i++)
    {
    		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d ",&a[i][j]);
		}
	}
	int *ptr;


	    for(i=0;i<n;i++)
    {
    		for(j=0;j<n;j++)
		{
		   ptr=&a[i][j];
		   printf("%d \n",*ptr*a[i][j]*a[i][j]);
		}
	}


}