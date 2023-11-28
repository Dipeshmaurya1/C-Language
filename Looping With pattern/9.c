//Print a Pattern 
//1 1 1 1 1
//2 2 2 2
//3 3 3
//4 4
//5 by Looping
#include<stdio.h>

main()

{
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=a;b<=5;b++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
}