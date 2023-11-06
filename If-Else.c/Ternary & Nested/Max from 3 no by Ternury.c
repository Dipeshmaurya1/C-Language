#include<stdio.h>

main()

{
	int a,b,c;
		printf("Enter The Value of A,B,C:");
		scanf("%d%d%d",&a,&b,&c);
	(a>b)?(a>c)?printf("A is Maximum"):printf("C is Maximum"):(b>c)?printf("B is Maximum"):printf("C is Maximum");
}