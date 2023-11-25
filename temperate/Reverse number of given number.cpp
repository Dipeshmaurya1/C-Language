// 4. wap to reverse number of given number. 
#include<stdio.h>

main()

{
	int n,rev;
	printf("Enter The Value of N: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rev= n%10;
		printf("%d",rev);
		n=n/10;
	}
}