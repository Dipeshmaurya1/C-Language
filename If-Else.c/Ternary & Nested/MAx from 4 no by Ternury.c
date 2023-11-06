#include<stdio.h>

main()

{
	int a,b,c,d;
		printf("Enter The Value of A,B,C,D:");
		scanf("%d%d%d%d",&a,&b,&c,&d);
	(a>b)?(a>c)?(a>d)?printf("A is Maximum"):printf("D is Maximum"):(c>d)?printf("C is Maximum"):printf("D is Maximum")
	:(b>c)?(b>d)?printf("B is Maximum"):printf("D is Maximum"):(c>d)?printf("C is Maximum"):printf("D is Maximum");
}