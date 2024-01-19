#include <stdio.h>
#include<string.h>


struct Student 
{
    int rollno;
    char name[50];
    int chemistry;
    int maths;
    int physics;
};

int main() 
{
    
    
    struct Student students[5];

    int i;
    
    for (i = 0; i < 5; i++) 
	{
        printf("Enter details for Student %d:\n", i + 1);
        
       
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);

        printf("Name: ");
        scanf("%s", students[i].name); 

     
        printf("Chemistry Marks (out of 100): ");
        scanf("%d", &students[i].chemistry);

        printf("Mathematics Marks (out of 100): ");
        scanf("%d", &students[i].maths);

        printf("Physics Marks (out of 100): ");
        scanf("%d", &students[i].physics);

        printf("\n");
    }

 
    printf("Mark Sheets:\n");
    for (i = 0; i < 5; i++) 
	{
        float total_marks = students[i].chemistry + students[i].maths + students[i].physics;
        float percentage = (total_marks / 300) * 100;

        printf("\nStudent %d - Roll No: %d\n", i + 1, students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %d\n", students[i]. chemistry);
        printf("Mathematics Marks: %d\n", students[i].maths);
        printf("Physics Marks: %d\n", students[i]. physics);
        printf("Percentage: %.2f%%\n", percentage);
    }

    return 0;
}
