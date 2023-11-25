// 7. wap to check number is palindrom or not. 
#include<stdio.h>

main()

{
	int n;
	int reversed=0;
	int remainder,original;
		printf("Enter Any Value:");
		scanf("%d",&n);
	original=n;
	while(n!=0)
	{
		remainder=n% 10;
        reversed=reversed*10+remainder;
        n/=10;
	}
	if(original==reversed)
		printf("%d is Palindrome",original);
	else
		printf("%d is Not a Palindrome",original);
}