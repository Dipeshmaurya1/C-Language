#include<stdio.h> 

main()

{
	int a,b,c,d,e;
		printf("Enter The Value of A,B,C,D,E:");
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("A is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Minimum");
				}
				else
				{
					printf("e is Minimum");
				}
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("B is Minimum");
				}
				else
				{
		            printf("E is Minimum");	
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is Minimum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Minumum");
				}
				else
				{
					printf("E is Minimum");
				}
			}
		}
	}
}