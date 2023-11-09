#include<stdio.h>

main()

{
	int a=2;
	int N;
		printf("Enter Your Value:");
		scanf("%d",&N);
	while(N>=a)
	{
		printf("%d ",N);
		N-=2;
	}
}