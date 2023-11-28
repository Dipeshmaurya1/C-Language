//Print a Pattern 
//1 2 3 4 5
//2 3 4 5
//3 4 5
//4 5
//5 by Looping
#include<stdio.h>

main()

{
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=a;b<=5;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
}