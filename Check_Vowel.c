// WAP to check given character is vowel or not...
#include<stdio.h>

int main()
{
    char character;
    printf("Enter a character : ");
    scanf("%c", &character);

    switch (character)
    {
    case 'A':
    case 'a':
        printf("%c is vowel!!", character);
        break;
    case 'E':
    case 'e':
        printf("%c is vowel!!", character);
        break;
    case 'I':
    case 'i':
        printf("%c is vowel!!", character);
        break;
    case 'O':
    case 'o':
        printf("%c is vowel!!", character);
        break;
    case 'U':
    case 'u':
        printf("%c is vowel!!", character);
        break;
    
    default:
        printf("Sorry %c character is not vowel!", character);
        break;
    }
    return 0;
}