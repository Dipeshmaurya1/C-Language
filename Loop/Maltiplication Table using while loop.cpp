#include<stdio.h>

main()

{
	int a=1;
	int N;
		printf("Enter Your Value:");
		scanf("%d",&N);
	while(a<=10)
	{
		printf("%d*%d=%d\n",N,a,N*a);
		a++;
    }
}