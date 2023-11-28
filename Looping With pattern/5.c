//Print a Pattern
//5
//4 5
//3 4 5
//2 3 4 5
//1 2 3 4 5 by Looping
#include<stdio.h>

main()

{
    int a,b;
    for(a=5;a>=1;a--)
    {
        for(b=a;b<=5;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
}