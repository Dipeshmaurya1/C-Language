#include<stdio.h>
#include<string.h>
struct student
{
	int stu_id;
    int stu_age;
    int stu_standard;
	char stu_name[50];
    char stu_course[50];
    char stu_city[50];
    char stu_school[50];
};

main()
{
	int i;
	char name[50];
	struct student s[3];
    
    for(i=0;i<3;i++)
    {
    	printf("\nEnter Student ID:");
    	scanf("%d",&s[i].stu_id);
    	printf("Enter Student Name:");
    	scanf("%s",&s[i].stu_name);
    	printf("Enter Student Standard:");
    	scanf("%d",&s[i].stu_standard);
    	printf("Enter Student Age:");
    	scanf("%d",&s[i].stu_age);
    	printf("Enter Student Course:");
    	scanf("%s",&s[i].stu_course);
    	printf("Enter Student School:");
    	scanf("%s",&s[i].stu_school);
    	printf("Enter Student City:");
    	scanf("%s",&s[i].stu_city);
	}
	for(i=0;i<3;i++)
	{
		printf("ID=%d\n ",s[i].stu_id);
		printf("Name=%s\n ",s[i].stu_name);
		printf("Standard=%d\n ",s[i].stu_standard);
		printf("Age=%d\n ",s[i].stu_age);
		printf("Course=%d ",s[i].stu_course);
		printf("School=%d ",s[i].stu_school);
		printf("City=%d ",s[i].stu_city);
	}
}

