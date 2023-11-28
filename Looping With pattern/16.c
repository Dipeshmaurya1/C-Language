//Print a Pattern 
//1 0 1 0 1
//0 1 0 1
//1 0 1
//0 1
//1 by Looping
#include<stdio.h>

main()

{
	int a,b;
    for(a=5;a>=1;a--)
    {
        for(b=a;b>=1;b--)
        {
        	if(b%2==1)
        	{
        		printf("1 ");
			}
			else
			{
				printf("0 ");
			}
        }
        printf("\n");
    }  
}