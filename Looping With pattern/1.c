//Print a pattern
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5 by looping
#include<stdio.h>

main()

{	
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }  
}