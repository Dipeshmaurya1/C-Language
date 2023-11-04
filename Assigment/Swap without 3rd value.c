#include<stdio.h>

main()

{
	int a,b;
		printf("Enter The Value of A:");
		scanf("%d",&a);
		printf("Enter The Value of B:");
		scanf("%d",&b);
		
	a=a*b;
	b=a/b;
	a=a/b;
		printf("After Swapping A=%d\n",a);
		printf("After Swapping B=%d",b);
}