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
		
		ans=x*x+2*x*y+2*z*x+y*y+2*y*z+z*z;
		printf("The Answer is=%d",ans);
		
}