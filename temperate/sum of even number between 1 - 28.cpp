//2. wap to find sum of even number between 1 to 28.
#include<stdio.h>

main()

{
	int x=1;
	int n=28;
	int sum=0;
	

	
	while(x<=n)
	{
		if(x%2==0)
		{
			printf("%d\n",x);
			sum=sum+x;
		}
		x++;
	}
	
	printf("Sum of Even is=%d",sum);
}