// Bubble Sort using loops
#include <stdio.h>
int main()
{
    int i, n, temp, j, arr[10];

    // Get the number of elements in the array from the user
    printf("Enter the number of element in array :");
    scanf("%d", &n);

    // Input the elements of the array from the user
    printf("\n Enter the elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble sort algorithm
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            // Swap elements if they are in the wrong order
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display the sorted array in ascendign order
    printf("\n The array sorted in ascending order is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}