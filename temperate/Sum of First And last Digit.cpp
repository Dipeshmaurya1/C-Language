#include<stdio.h>
main()
{
	int n;
	int fd ;
	printf("Enter any number :");
	scanf("%d",&fd);
	int ld=fd%10;
	for(n;fd>9;)
	{
		fd = fd/10;
	}
	printf("%d + %d = %d",fd,ld,fd+ld);
}