/* Input a year and check whether it is a leap year.
Example
Input: 2024
Output: Leap Year
*/

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}

/* Hint 4 (The complete rule)

A year is a leap year if:

It is divisible by 400

OR

It is divisible by 4
AND
not divisible by 100
*/