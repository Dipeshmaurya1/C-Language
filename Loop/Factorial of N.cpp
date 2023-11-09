#include<stdio.h>

main()

{
	int a=1;
	int N;
	int sum=1;
		printf("Enter Your Value:");
		scanf("%d",&N);
	while(a<=N)
	{
		sum=sum*a;
		a++;
	}
	printf("%d ",sum);
}