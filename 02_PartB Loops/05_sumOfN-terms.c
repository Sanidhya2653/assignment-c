/* Find the sum:
1 + 2 + 3 + ... + n
*/


#include<stdio.h>

int main()
{
    int num, i, sum=0;
    printf("Enter a number:");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        sum = sum + i;
    }
    printf("Sum = %d", sum);

    return 0;
}

/* Using only 2 variables

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(; n >= 1; n--)
    {
        sum = sum + n;
    }

    printf("Sum = %d", sum);

    return 0;
}

*/

/*

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    printf("sum = %d", (num * (num + 1))/2);

    return 0;
}

*/