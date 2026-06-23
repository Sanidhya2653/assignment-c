/* Input temperature:
0-10   Cold
11-20  Cool
21-30  Pleasant
31-40  Hot
>40    Very Hot
Implement using nested if-else.
*/

#include<stdio.h>
int main()
{
    int temp;
    printf("Enter the value of Temperature:");
    scanf("%d", &temp);

    if (temp >= 0 && temp <= 10)
    {
        printf("Cold");
    }
    else
    {
        if (temp >= 11 && temp <= 20) // this is correct but we can simplify using only checking (temp <= 20)
        {
            printf("Cool");
        }
        else
        {
            if (temp >= 21 && temp <= 30)  // same here
            {
                printf("Pleasant");
            }
            else
            {
                if (temp >= 31 && temp <= 40) // same here
                {
                    printf("Hot");
                }
                else
                {
                    if (temp > 40)
                        {
                            printf("Very Hot");
                    }
                    else
                    {
                        printf("Invalid Temperature");
                    }
                }
            }
        }
    }

    return 0;
}