// How to create a array by user given values...
#include<stdio.h>

int main()
{
    // taking size of array by user
    int size, i;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    // array declaration & taking inputs
    int arr[size];
    printf("Enter %d element of array : ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printing array values
    printf("Here is your current array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}