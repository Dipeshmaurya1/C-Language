#include<stdio.h>

main()

{
	int x=1;
	int y,z;
		printf("Enter Value To Skip:");
		scanf("%d%d",&y,&z);
	for(x;x<=10;x++)
	{
		if(x==y||x==z)
		{
			continue;
		}
		printf("%d ",x);
	}
}