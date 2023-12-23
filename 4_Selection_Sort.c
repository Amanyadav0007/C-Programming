// Selection Sort in C...

#include <stdio.h>

void selectionSort(int arr[], int n) // Function for selection sort
{
    int i, j, small;
    for (i = 0; i < n - 1; i++)
    {
        small = i;
        // Find index of smallest element in unsorted part of array
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        if (small != i)
        {
            int temp = arr[small];
            arr[small] = arr[i];
            arr[i] = temp;
        }

        // For swap smallest element with the first unsorted element
        // int temp = arr[small];
        // arr[small] = arr[i];
        // arr[i] = temp;
    }
}

void printArr(int arr[], int n) // Functio for print array
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n, i;
    printf("Enter the number of element in array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before sorting array elements : ");
    printArr(arr, n); // Fucntion call for print array

    selectionSort(arr, n); // Selection sorting function call here
    printf("\nAfter sorting array elements : ");
    printArr(arr, n); // Fucntion call for print array

    return 0;
}
