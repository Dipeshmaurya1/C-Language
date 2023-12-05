#include<stdio.h>

main()

{   
	int a[5]={10,20,30,40,50};
	int b[5]={1,2,3,4,5};
	int c[5];

    int x;
	for(x=0;x<5;x++)
	{
	 	c[x]=a[x]+b[x];
		printf("The Answer is:%d \n",c[x]);
	}
}