// wap to reverse an array...
#include<stdio.h>

int main()
{
    // taking size of array by user
    int size, i, sum=0;
    float avg=0;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    // array declaration & taking inputs
    int arr[size];
    printf("Enter %d element of array : ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printing array values and calculating sum of array
    printf("Here is your current array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // printing reverse array(in-place reversal)
    printf("Here is your reverse array : ");
    for (int j = size-1; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}