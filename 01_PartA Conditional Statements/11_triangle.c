/*Input three sides of a triangle.
Print:
Equilateral
Isosceles
Scalene
Invalid Triangle
*/

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of triangle:");
    scanf("%d %d %d", &a, &b, &c);

    if ( a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalid Triangle");
    }
    else
    {
        if (a == b && a == c && b == c)  // (a == b && a == c) this is only enough
        {
            printf("Equilateral");
        }
        else
        {
            if ( (a == b && b != c && a != c) || (a == c && a != b && c != b) || (b  == c && b != a && c != a))
            {
                printf("Isosceles"); // only (a == b || b == c || a == c) this condition is enough bcz we already checked for invalid and equilateral
            }
            else
            {
                printf("Scalene");
            }
        }
    }

    return 0;
}

/* For a triangle with sides a, b, and c:

Equilateral → All three sides are equal.
a = b = c

Isosceles → Exactly two sides are equal.
a = b OR b = c OR a = c
(but not all three equal if you want to distinguish it from equilateral)

Scalene → All three sides are different.
a ≠ b, b ≠ c, a ≠ c

Invalid Triangle → The sum of any two sides is not greater than the third side.
a + b <= c
OR
b + c <= a
OR
a + c <= b

Valid Triangle
a + b > c
a + c > b
b + c > a
*/