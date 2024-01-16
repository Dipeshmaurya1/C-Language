#include <stdio.h>
#include<string.h>


struct Student 
{
    int rn;
    char name[50];
    int chem;
    int maths;
    int phy;
};

int main() 
{
    
    
    struct Student students[5];

    int i;
    
    for (i = 0; i < 5; i++) 
	{
        printf("Enter details for Student %d:\n", i + 1);
        
       
        printf("Roll No: ");
        scanf("%d", &students[i].rn);

        printf("Name: ");
        scanf("%s", students[i].name); 

     
        printf("Chemistry Marks (out of 100): ");
        scanf("%d", &students[i].chem);

        printf("Mathematics Marks (out of 100): ");
        scanf("%d", &students[i].maths);

        printf("Physics Marks (out of 100): ");
        scanf("%d", &students[i].phy);

        printf("\n");
    }

 
    printf("Mark Sheets:\n");
    for (i = 0; i < 5; i++) 
	{
        float total_marks = students[i].chem + students[i].maths + students[i].phy;
        float percentage = (total_marks / 300) * 100;

        printf("\nStudent %d - Roll No: %d\n", i + 1, students[i].rn);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %d\n", students[i].chem);
        printf("Mathematics Marks: %d\n", students[i].maths);
        printf("Physics Marks: %d\n", students[i].phy);
        printf("Percentage: %.2f%%\n", percentage);
    }

    return 0;
}