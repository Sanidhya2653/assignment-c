/* Q3.
Input two numbers and print the larger one.
*/

#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d%d", &x,&y);

    if (x > y)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }


}