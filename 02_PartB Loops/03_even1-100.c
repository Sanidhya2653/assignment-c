/* Print even numbers from 1 to 100.*/

#include<stdio.h>
int main()
{
    int i;
    printf("For Loop\n");

    for(i=1; i<=100; i++)
    {
        if(i%2 == 0)
        printf("%d\n", i);
    }

    printf("\nWhile Loop\n");

    i = 1;
    while(i<=100)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    printf("\nDowhile Loop\n");

    i = 1;
    do
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    while(i <= 100);

    return 0;
}

/* More efficient approach

 For Loop
 for(i = 2; i <= 100; i += 2)
{
printf("%d\n", i);
}

While Loop
i = 2;
while(i <= 100)
{
printf("%d\n", i);
i += 2;
}

Do While Loop
i = 2;
do
{
printf("%d\n", i);
i += 2;
}
while(i <= 100);
*/
