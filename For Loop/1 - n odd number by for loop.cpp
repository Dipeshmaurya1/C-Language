#include<stdio.h>

main()

{
	int n;
	int x=1;
	printf("Enter the value of :");
	scanf("%d",&n);
	for(x=1;x<=n;x+=2)
	{
		printf("%d ",x);
	}

}