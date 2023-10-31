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
		
		ans=x*x-2*x*y+y*y;
		printf("The Answer is=%d",ans);
}