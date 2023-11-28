//Print a Pattern
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5 by Looping
#include<stdio.h>

main()

{
    int a,b;    
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
}