#include<stdio.h>
#include<conio.h>

main()

{
	int x,y,z;
	int ans;
		printf("Enter The Value of X:");
		scanf("%d",&x);
		printf("Enter The Value of Y:");
		scanf("%d",&y);
		printf("Enter The Value of Z:");
		scanf("%d",&z);
		
		ans=x*x*x+y*y*y+z*z*z+3*(x+y)*(y+z)*(z+x);
		printf("The Answer is=%d",ans);
		
}