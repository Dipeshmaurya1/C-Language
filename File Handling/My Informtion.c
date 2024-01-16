//WAP to print your basic information in HTML using file handling using Dev C++.
#include <stdio.h>

main() 
{
   
    FILE *info = fopen("My_Information.html", "w");
	
		
	
    fprintf(info, "<html>\n");
    fprintf(info, "<head>\n");
    fprintf(info, "<title>My Basic Information</title>\n");
    fprintf(info, "</head>\n");
    fprintf(info, "<body>\n");
    fprintf(info, "<h1>My Basic Information</h1>\n");
    fprintf(info, "<p>Name: Dipesh Maurya </p>\n");
    fprintf(info, "<p>Age: 18</p>\n");
    fprintf(info, "<p>Course: Master in Flutter Devlopment</p>\n");
    fprintf(info, "<p>Location: Surat, Gujarat</p>\n");
    fprintf(info, "</body>\n");
    fprintf(info, "</html>\n");

    printf("HTML file 'my_info.html' created successfully!\n");
}