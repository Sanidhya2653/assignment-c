/* Q5.
Input marks and print grade:
Marks   Grade
>=90     A
>=75     B
>=60     C
>=40     D
<40     Fail

Use if-else ladder.
*/

#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if (x >= 90)
    {
        printf("Grade A");
    }
    else
    {
        if (x >= 75)
            printf("Grade B");
        else
            if(x >= 60)
                printf("Grade C");
        else
            if (x >= 40)
                printf("Grade D");
        else
            printf("Fail");
    }
}