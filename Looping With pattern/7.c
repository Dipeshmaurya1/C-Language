//Print a Pattern
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1 by Looping
#include<stdio.h>
 
main()

{
    int a,b;
    for (a=5;a>=1;a--)
    {
        for (b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
}