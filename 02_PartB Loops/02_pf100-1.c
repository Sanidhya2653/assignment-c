/*
 * Print numbers from 100 to 1.
 */

#include<stdio.h>
int main()
{
    int i;
    printf("For Loop\n");

    for(i = 100; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    printf("\nWhile Loop\n");

    i = 100;
    while(i >= 1)
    {
        printf("%d\n", i);
        i--;
    }

    printf("\nDo While Loop\n");

    i = 100;
    do
    {
        printf("%d\n", i);
        i--;
    }
    while(i >= 1);

    return 0;
}