#include<stdio.h>

main()

{
	int a,b,c,d;
		printf("Enter The Value of A,B,C,D:");
		scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is Maximum");
			}
			else
			{
				printf("D is Maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is Maximum");
			}
			else
			{
				printf("D is Maximum");
			}
        }
    }
    else
    {
    	if(b>c)
    	{
    		if(b>d)
    		{
    			printf("B is Maximum");
			}
			else
			{
				printf("D is Maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is Maximum");
			}
			else
			{
				printf("D is Maximum");
			}
		}
	}
}