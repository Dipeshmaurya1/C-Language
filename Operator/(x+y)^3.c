#include<stdio.h>
#include<conio.h>

main()

{
	int x,y;
	int ans;
		printf("Enter The Value of X:");
		scanf("%d",&x);
		printf("Enter The Value of Y:");
		scanf("%d",&y);
		
		ans=x*x*x+3*x*x*y+3*x*y*y+y*y*y;
		printf("The Answer is=%d",ans);
}