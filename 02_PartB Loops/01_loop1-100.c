/* Print numbers from 1 to 100 using:
for loop
while loop
do-while loop
*/

/*
#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=100; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int i = 1;
    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;

}

*/

#include<stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d\n",i);
        i++;
    }
    while(i<=100);

    return 0;
}