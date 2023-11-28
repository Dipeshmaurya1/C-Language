//Print a Pattern
//1
//2 1
//3 2 1
//4 3 2 1
//5 4 3 2 1	by Looping
#include<stdio.h>

main()

{
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=a;b>=1;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
}