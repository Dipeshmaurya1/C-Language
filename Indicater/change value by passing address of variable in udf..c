#include<stdio.h>
void hacker(int *otp)
{
	*otp=*otp-799;
}
main()
{
	int bob=1000;
	int *otp=&bob;
	hacker(otp);
	printf("Amount :%d",bob);

}