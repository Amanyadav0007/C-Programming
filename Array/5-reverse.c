// Reverse a string in c
// #include<stdio.h>

// int main()
// {
//     char name[] = "AmanYadav";
//     int len = 0, temp;
//     while (name[len] != '\0')
//     {
//         len++;
//     }
//     printf("The length of the string is : %d\n", len);
//     for (int i = 0; i < (len-1)/2; i++)
//     {
//         temp = name[i];
//         name[i] = name[len-1-i];
//         name[len-1-i] = temp;
//     }
//     printf("String now is : %s", name);
//     return 0;
// }



#include<stdio.h>
#include<string.h>

void reverseString(char str[])
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the center of the string 
        start++;
        end--;
    }
    
}

int main()
{
    char inputString[100];
    printf("Enter a string : ");
    scanf("%s", inputString);

    reverseString(inputString);

    printf("Reversed string is : %s\n", inputString);

    return 0;
}