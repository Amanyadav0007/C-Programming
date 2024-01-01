// WAP to create 2D array .....
#include<stdio.h>

int main()
{
    int arr[3][3], i, j;
    printf("Enter array element here :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");

    printf("Here is our 2-D array : \n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        } 
    }
    
    return 0;
}