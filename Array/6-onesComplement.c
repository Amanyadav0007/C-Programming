// wap to find 1's complement of any numbers...
#include<stdio.h>
#include<string.h>
#define SIZE 16

int main()
{
    char binary[SIZE+1], onesComp[SIZE+1];
    int i, error=0;

    printf("Enter %d bit binary value: ", SIZE);
    gets(binary);
    int len = strlen(binary);
    printf("length is: %d", len);

    for (i = 0; i < SIZE; i++)
    {
        if (binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if (binary[i] == '0')
        {
            onesComp[i] = '1';
        }
        else
        {
            printf("Invalid Inputs!!");
            error = 1;
            break;  // exit forsm loop
        }
    }
    
    onesComp[SIZE] = '\0';
    if (error == 0)
    {
        printf("Original binary = %s\n", binary);
        printf("Ones complement = %s", onesComp);
    }
    
    return 0;
}