#include<stdio.h>
#include<conio.h>

main()

{
	int a,b,c;
	
	printf("Enter Value A:");
	scanf("%d",&a);
	printf("Enter Value B:");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("After Swapping A=%d\n",a);
	printf("After Swapping B=%d",c);

	
	
}