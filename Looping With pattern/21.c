//Print a Pattern 
//A
//A B
//A B C
//A B C D
//A B C D E by Looping
#include<stdio.h>

main()

{	
    char a,b;
    
    for(a='A'; a<='E'; a++)
    {
        for(b='A'; b<=a; b++)
        {
            printf("%c ",b);
        }
        printf("\n");
    }  
}