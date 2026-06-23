#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if(((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) && (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        printf("Vowel");
    else
        printf("Consonant");
    if ( ch >= '0' && ch <= '9' )
        printf("Digit");
    else
        printf("Special Character");

    return 0;
}