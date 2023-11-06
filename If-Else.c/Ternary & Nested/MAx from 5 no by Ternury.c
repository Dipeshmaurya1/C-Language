#include<stdio.h>

main()

{
	int a,b,c,d,e;
		printf("Enter The Value of A,B,C,D,E:");
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is maximum"):printf("E is maximum"):(d>e)? printf("D is maximum"):printf("E is maximum"):(c>d)?(c>e)?printf("C is maximum"):printf("E is maximum"):(d>e)?printf("D is maximum"):printf("E is maximum"):(b>c)?(b>d)?(b>e)?printf("B is maximum"):printf("E is maximum"):(d>e)?printf("D is maximum"):printf("E is maximum"):(c>d)?(c>e)?printf("C is maximum"):printf("E is maximum"):(d>e)?printf("D is maximum"):printf("E is maximum");
}