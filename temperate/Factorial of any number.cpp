#include<stdio.h>

main()

{
	int num;
   	int x=1;
    int fac=1;
   		printf("Enter any number :");
    	scanf("%d",&num);
    for(x=1;x<=num;x++)
    {
    	fac=fac*x;

	
	}    	
	printf("Factorial is = %d",fac);
}