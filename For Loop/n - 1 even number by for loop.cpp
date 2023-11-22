#include<stdio.h>
main()
{
	int n;
	int x=1;
		printf("Enter Any Value:");
		scanf("%d",&n);
	for(x=1;n>=x;n--)
	{
		if(n%2==0)
		{

		printf("%d ",n);
	   }
	}

}