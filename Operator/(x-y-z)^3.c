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
		
		ans=x*x*x-3*x*x*y-3*x*x*z+3*x*y*y+6*x*y*z+3*x*z*z-y*y*y-3*y*y*z-3*y*z*z-z*z*z;
		printf("The Answer is=%d",ans);
		
}