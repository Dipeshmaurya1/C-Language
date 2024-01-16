#include<stdio.h>

main()
{
	int i;
	FILE *f1;
	FILE *f2;
	f1 = fopen("Even.txt","w");
	f2 = fopen("Odd.txt","w");
	
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(f1,"Even:%d\n",i);
			printf("%d ",i);
		}
	}
		printf("\n");
	for(i=50;i<=70;i++)
	{
		if(i%2!=0)
		{
			fprintf(f2,"Odd:%d\n",i);
			printf("%d ",i);
		}
	}
}