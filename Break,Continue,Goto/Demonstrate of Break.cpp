#include<stdio.h>

main()

{
	int x=1;
	int y;
		printf("Enter Limit:");
		scanf("%d",&y);
	for(x;x<=20;x++)
	{
		printf("%d ",x);
		if(x==y)
		{
			break;
		}
	}
}