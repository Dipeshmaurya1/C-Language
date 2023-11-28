//Print a Pattern
//0
//0 1
//0 1 0
//0 1 0 1
//0 1 0 1 0 by Looping
#include<stdio.h>

main()

{
	int a,b;
    for(a=0;a<=4;a++)
    {
        for(b=0;b<=a;b++)
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