// To perform the switch case in c langauge 
#include<stdio.h>
void main()
{
    char albets;
    printf("Enter the an albets");
    scanf("%c",&albets);
    switch(albets)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("it is an vowel");
        break;
        default:
        printf("It is an consonant");
    }
}