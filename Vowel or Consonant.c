#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case'a':
        case'A':
        case'E':
        case'e':
        case'i':
        case'I':
        case'o':
        case'O':
        case'u':
        case'U':
               printf("VOWEL",ch);
               break;
        default:
            printf("CONSONANT",ch);
    }
    return 0;
}