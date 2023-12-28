//Q.1 Write a Program to find the cube of a given number using UDF.
#include<stdio.h>

void Cube()
{
	int a;
	printf("Enter The value of A:");
	scanf("%d",&a);
	int cube=a*a*a;
	printf("The Cube is =%d",cube);
}
main()
{
	Cube();
}