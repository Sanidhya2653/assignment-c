/* Print the multiplication table of a number.
Example:
Input: 5

Output:
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50
*/

#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter a number:");
    scanf("%d", &num);

    printf("For Loop\n");

    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }

    printf("\nWhile loop\n");

    i = 1;
    while(i<=10)
    {
        printf("%d x %d = %d\n", num, i, num*i);
        i++;
    }

    printf("\nDo While Loop\n");

    i = 1;
    do
    {
        printf("%d x %d = %d\n", num, i, num*i);
        i++;
    }
    while(i<=10);

    return 0;
}