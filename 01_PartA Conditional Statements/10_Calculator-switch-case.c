/* Make a simple calculator using switch case.
Input:
10
+
20
Output:
30
Support:
+, -, *, /, %

*/

#include<stdio.h>
int main()
{
    int i,j;
    char op;
    printf("Enter operation to be performed:");
    scanf("%d %c %d", &i, &op, &j);

    switch(op)
    {
    case '+' :
        printf("%d", i+j);
        break;
    case '-':
        printf("%d", i-j);
        break;
    case '*':
        printf("%d", i*j);
        break;
    case '/':
        if (j == 0)
            printf("Error: division by zero");
        else
        printf("%d", i/j);
        break;
    case '%':
        if (j==0)
            printf("Error: modulus by zero");
        else
        printf("%d", i%j);
        break;
    default:
        printf("Invalid Operator Handling");

    }

    return 0;
}
